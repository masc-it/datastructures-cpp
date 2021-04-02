//
// Created by masc9 on 02/04/2021.
//

#ifndef DATA_STRUCTURES_LINK_H
#define DATA_STRUCTURES_LINK_H

template <typename T>
class Link {

private:




public:
    T value;
    Link* next;
    explicit Link(const T& value, Link* next = nullptr){

        this->value = value;
        this->next = next;

    }

    explicit Link(Link* next = nullptr){
        this->next = next;
    }


};


#endif //DATA_STRUCTURES_LINK_H
