//
// Created by masc9 on 03/04/2021.
//

#ifndef DATA_STRUCTURES_QUEUE_H
#define DATA_STRUCTURES_QUEUE_H



template<typename T>
class Queue {

private:

    void operator = (const Queue&){}
    Queue(const Queue&) {}

public:

    Queue(){}

    virtual ~Queue() = default;

    virtual void clear() = 0;
    virtual void enqueue(const T& el) = 0;
    virtual T dequeue() = 0;

    virtual const T& frontValue() = 0;

    virtual int length() const = 0;


};


#endif //DATA_STRUCTURES_QUEUE_H
