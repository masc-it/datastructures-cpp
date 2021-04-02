//
// Created by masc9 on 02/04/2021.
//

#ifndef DATA_STRUCTURES_LINKEDLIST_H
#define DATA_STRUCTURES_LINKEDLIST_H

#include "List.h"
#include "Link.h"

template<typename T>
class LinkedList : public List<T>{


private:
    Link<T>* head;
    Link<T>* tail;

    Link<T>* curr;

    int count = 0;

    void removeAll(){
        while (head != nullptr){
            curr = head;
            head = head->next;
            delete curr;
        }
    }

    void init(){
        curr = tail = head = new Link<T>;
        count = 0;
    }

public:

    LinkedList(){

        init();

    }

    virtual ~LinkedList() {

        removeAll();

    }

    void clear() override {

        removeAll();
        init();

    }

    void insert(const T &element) override {

        // in this implementation, the next node is stored as the current one.
        curr->next = new Link<T>(element, curr->next);

        if ( tail == curr) tail = curr->next;

        count++;

    }

    void append(const T &element) override {

        tail = tail->next = new Link<T>(element, nullptr);
        count++;

    }

    T remove() override {

        T el = curr->next->value;

        // get current element
        Link<T>* tmp = curr->next;

        // point to the link after the one we want to remove
        curr->next = curr->next->next;

        delete tmp;
        count--;

        return el;
    }

    void moveToStart() override {

        curr = head;

    }

    void moveToEnd() override {

        curr = tail;
    }

    void prev() override {

        Link<T>* tmp = head;

        while(tmp->next != curr) tmp = tmp->next;

        curr = tmp;


    }

    void next() override {

        curr = curr->next;

    }

    int length() const override {
        return count;
    }

    int currentPos() const override {

        Link<T>* tmp = head;
        int i = 0;
        for ( i = 0; tmp != curr; i++){

            tmp = tmp->next;

        }
        return i;
    }

    void moveToPos(int pos) override {


        curr = head;

        for ( int i = 0; i < pos; i++, curr = curr->next);


    }

    const T &getValue() const override {
        return curr->next->value;
    }


};


#endif //DATA_STRUCTURES_LINKEDLIST_H
