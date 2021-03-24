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
};


#endif //DATA_STRUCTURES_MERGESORT_H
