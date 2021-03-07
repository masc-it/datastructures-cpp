//
// Created by mascIT on 28/01/2019.
//

#ifndef DATA_STRUCTURES_STACK_H
#define DATA_STRUCTURES_STACK_H

#include <vector>

template <class T>
class Stack {

private:
    std::vector<T> elements;

    int size = 0;
public:

    int getSize(){
        return elements.size();
    }

    T pop(){

        if ( getSize() == 0){

            return T();

        }

        T res = elements.back();
        elements.pop_back();

        size--;
        return res;
    }

    void push(T elem){
        elements.push_back(elem);
        size++;
    }

    T peek(){

        if ( getSize() == 0){
            return T();
        }

        return elements.back();

    }

};


#endif //DATA_STRUCTURES_STACK_H
