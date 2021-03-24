//
// Created by masc9 on 24/03/2021.
//

#ifndef DATA_STRUCTURES_MERGESORT_H
#define DATA_STRUCTURES_MERGESORT_H


#include <vector>

class MergeSort {

private:
    std::vector<int> merge(const std::vector<int>& c, const std::vector<int>& d){

        std::vector<int> res;
       int i = 0;
       int j = 0;

        while (i < c.size() && j < d.size()){

            if ( c[i] <= d[j]){
                res.push_back(c[i]);
                i++;
            } else {
                res.push_back(d[j]);
                j++;
            }

        }

        // add remaining elements
        for ( int a = i; a < c.size(); a++){
            res.push_back(c[a]);
        }

        for ( int a = j; a < d.size(); a++){
            res.push_back(d[a]);
        }

        return res;

    }

    void merge_inplace(std::vector<int>* arr, int start, int mid, int end){

        int j = mid + 1;

        // we're already done
        if ( arr->at(mid) <= arr->at(j)) {
            return;
        }

        while (start <= mid && j <= end){

            // place item in its right spot
            if ( arr->at(start) > arr->at(j)){

                // arr[j] must be swapped with arr[start]
                int value = arr->at(j);
                int index = j;

                // let's shift everybody one step to the right
                while (index > start) {

                    arr->at(index) = arr->at(index - 1);
                    index--;

                }

                // till we can finally put the value in its proper ordered slot!
                arr->at(start) = value;

                mid++;
                j++;
            }

            // in any case, we want to keep goin
            start++;

        }

    }

public:
    MergeSort()= default;

    std::vector<int> merge_sort(const std::vector<int>& arr){

        if ( arr.size() <= 1 ){
            return arr;
        }

        std::vector<int> c1;
        std::vector<int> c2;
        c1.reserve(arr.size()/2);
        c2.reserve(arr.size()/2);
        for ( int i = 0; i < arr.size()/2; i++){
            c1.push_back(arr[i]);
        }

        for ( int i = arr.size()/2; i < arr.size(); i++){
            c2.push_back(arr[i]);
        }

        auto left = merge_sort(c1);
        auto right = merge_sort(c2);

        return merge(left,right);

    }

    void merge_sort_inplace( std::vector<int>* arr, int start, int end){

        if ( start < end  ){

            int m = (start+end)/2;
            merge_sort_inplace(arr, start, m);
            merge_sort_inplace(arr, m+1, end);

            merge_inplace(arr, start, m, end);

        }
    }
};


#endif //DATA_STRUCTURES_MERGESORT_H
