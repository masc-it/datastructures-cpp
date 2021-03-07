//
// Created by mascIT on 28/01/2019.
//

#ifndef DATA_STRUCTURES_DYNAMICARRAY_H
#define DATA_STRUCTURES_DYNAMICARRAY_H

#include <iostream>

template <class T>
class DynamicArray {

private:
    T* arr;
    int len = 0;
    int capacity = 0;

public:

    DynamicArray(){
        this(20);
    }

    explicit DynamicArray( int capacity){

        if (capacity == 0)
            capacity = 1;

        this->capacity = capacity;

        arr = new T[capacity];

    }

    int size(){
        return this->len;
    }

    T get(int index){
        return arr[index];
    }

    void set(T elem, int pos){
        arr[pos] = elem;
    }

    void clear(){

        delete [] arr;

        arr = new T[capacity];
        len = 0;
    }

    void add(T elem){

        if (len + 1 >= capacity){
            capacity *= 2;
            T* tmp = new T[capacity];
            memcpy(tmp, arr, sizeof(T)*len);
            delete [] arr;
            arr = tmp;
        }

        arr[len] = elem;
        len++;

    }

    T removeAt(int index){

        T data = arr[index];

       // T* tmp = new T[len - 1];

        for ( int i = index + 1; i < len; i++ ){
            arr[i-1] = arr[i];
        }

       /*
        for (int i = 0, j = 0; i < len; i++, j++){
            if (i == index) j--; // Skip over rm_index by fixing j
            else tmp[j] = arr[i];
        }

        delete [] arr;

        arr = tmp;*/
        len--;

        return data;

    }

};


#endif //DATA_STRUCTURES_DYNAMICARRAY_H
