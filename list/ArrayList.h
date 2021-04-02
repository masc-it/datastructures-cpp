//
// Created by masc9 on 02/04/2021.
//

#ifndef DATA_STRUCTURES_ARRAYLIST_H
#define DATA_STRUCTURES_ARRAYLIST_H
#include "List.h"


template <typename T>
class ArrayList : public List<T> {

private:
    int maxSize;
    int listSize;
    int curr;
    T* list;

public:

    ArrayList(int size){
        maxSize = size;
        listSize = curr = 0;

        list = new T[maxSize];
    }

    ~ArrayList() {

        delete [] list;

    }

    void clear() override {

        delete [] list;
        listSize = curr = 0;
        list = new T[maxSize];

    }

    void insert(const T &element) override {

        // should check limits

        for ( int i = listSize; i > curr; i--){
            list[i] = list[i-1];
        }

        list[curr] = element;
        listSize++;

    }

    void append(const T &element) override {

        list[listSize++] = element;
    }

    T remove() override {

        T el = list[curr];

        // must shift all the elements
        for (int i = curr; i < listSize - 1; i++){
            list[i] = list[i+1];
        }

        listSize--;
        return el;
        
    }

    void moveToStart() override {

        curr = 0;

    }

    void moveToEnd() override {

        curr = listSize;

    }

    void prev() override {

        if ( curr != 0) curr--;

    }

    void next() override {

        if (curr < listSize) curr++;

    }

    int length() const override {
        return listSize;
    }

    int currentPos() const override {
        return curr;
    }

    void moveToPos(int pos) override {

        // should check boundaries :D
        curr = pos;

    }

    const T &getValue() const override {
        return list[curr];
    }


};


#endif //DATA_STRUCTURES_ARRAYLIST_H
