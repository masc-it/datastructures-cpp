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

    void insert(const T& element) override {

        // in this implementation, 'curr->next' node stands for the real current node.
        // If curr points to the preceding node, we make element removal more efficient as side effect.

        Link<T>* current = curr->next;
        auto* newNode = new Link<T>(element, current);

        curr->next = newNode;

        if ( tail == curr) tail = curr->next;

        count++;

    }

    void append(const T &element) override {

        tail = tail->next = new Link<T>(element, nullptr);
        count++;

    }

    T remove() override {

        /*
         * Since our current node is stored as 'curr->next', in 'curr' we have the previous one actually
         * This allows us to have a O(1) removal since we have direct access to the previous' next node that must be updated
         */

        T el = curr->next->value;

        // get current element
        Link<T>* tmp = curr->next;

        // update the current node as the next one
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
        int i;
        for ( i = 0; tmp != curr; i++){

            tmp = tmp->next;

        }
        return i;
    }

    void moveToPos(int pos) override {


        curr = head;

        for ( int i = 0; i < count && i < pos; i++, curr = curr->next);


    }

    const T &getValue() const override {

        // remind that 'curr->next' is the current element
        return curr->next->value;
    }


};


#endif //DATA_STRUCTURES_LINKEDLIST_H
