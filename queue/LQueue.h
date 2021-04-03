//
// Created by masc9 on 03/04/2021.
//

#ifndef DATA_STRUCTURES_LQUEUE_H
#define DATA_STRUCTURES_LQUEUE_H

#include "Queue.h"
#include "../list/Link.h"

template<typename T>
class LQueue : public Queue<T> {

private:

    Link<T>* front;
    Link<T>* rear;

    int size;

public:
    ~LQueue() override {

        clear();

        delete front;

    }

    LQueue(){

        front = rear = new Link<T>();
        size = 0;

    }

    void clear() override {

        while(front->next != nullptr){

            rear = front;
            delete rear;

        }

        rear = front;
        size = 0;

    }

    void enqueue(const T& el) override {

        rear->next = new Link<T>(el, nullptr);

        rear = rear->next;

        size++;

    }

    T dequeue() override {

        auto oldFrontValue = front->next->value;

        Link<T>* tmp = front->next;

        front->next = tmp->next;

        if (rear == tmp) rear = front;

        delete tmp;

        size--;

        return oldFrontValue;
    }

    const T &frontValue() override {
        return front->next->value;
    }

    int length() const override {
        return size;
    }

};


#endif //DATA_STRUCTURES_LQUEUE_H
