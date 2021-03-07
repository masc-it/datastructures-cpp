//
// Created by masc9 on 28/02/2021.
//

#ifndef DATA_STRUCTURES_ARRAY_H
#define DATA_STRUCTURES_ARRAY_H

template <class T>
class Array {

private:
    T* array;
    int size{};
    int last_pos;

public:
    explicit Array(int size) {

        this->size = size;
        this->array = new T[size];

        last_pos = 0;
    }

    int getSize(){
        return this->getSize();
    }

    void insert(int pos, T new_element){

        this->array[pos] = new_element;
        last_pos++;

    }

    T remove(int pos){

        // delete el at position pos and shift elements to rearrange array

    }

    T operator[] (int pos){
        return this->array[pos];
    }

};




#endif //DATA_STRUCTURES_ARRAY_H
