//
// Created by mascIT on 28/01/2019.
//

#ifndef DATA_STRUCTURES_LINKEDLIST_H
#define DATA_STRUCTURES_LINKEDLIST_H

template <class T>
class LinkedList {


private:

    class Node {

    public:

        T data;

        Node* next;
        Node* prev;

        Node()= default;
        Node(T data, Node* prev, Node* next){
            this->data = data;
            this->next = next;
            this->prev = prev;
        }

        Node& operator= (Node&& other) noexcept {
            // Guard self assignment
            if (this == &other)
                return *this;

            next = other.next;
            prev = other.prev;
            data = other.data;

            return *this;
        }


        bool operator==(Node&& other){
            return this == &other;
        }

    };
    int size = 0;

    Node* head = nullptr;
    Node* tail = nullptr;

public:

    LinkedList(){


    }

    int getSize(){return size;}

    void addLast(T elem){

        if (size == 0){
            head = tail = new Node(elem, nullptr, nullptr);
        } else {
            tail->next = new Node(elem, tail, nullptr);
            tail = tail->next;
        }

        size++;

    }

    void addFirst(T elem){

        if (size == 0){
            head = tail = new Node(elem, nullptr, nullptr);
        } else {
            head->prev = new Node(elem, nullptr, head);
            head = head->prev;
        }

        size++;

    }

    T getFirst(){
        return head->data;
    }

    T getLast() {
        return tail->data;
    }

    void addAt(int pos, T elem){

        if (pos == 0) {
            addFirst(elem);
            return;
        }

        if (pos == size) {
            addLast(elem);
            return;
        }

        int i = 0;
        for (Node * c = head; c != nullptr; c = c->next){

            // i
            if ( i == pos){

                Node* tmp = new Node(elem, c->prev, c);

                c->prev = tmp;
                c = tmp;
                size++;
                break;

            }
            i++;

        }


    }


    T operator[] (int pos){
        return this->nodes[pos].data;
    }

};

#endif //DATA_STRUCTURES_LINKEDLIST_H
