//
// Created by masc9 on 03/04/2021.
//

#ifndef DATA_STRUCTURES_DICT_H
#define DATA_STRUCTURES_DICT_H

#include "Pair.h"

template <typename K, typename T>
class Dict {

private:

    void operator = (const Dict&){}
    Dict(const Dict&)= default;


public:

    Dict() {}

    virtual ~Dict() { }

    virtual void put(const K& key, const T& value) = 0;

    virtual T remove(const K& key) = 0;

    virtual T find(const K& key) const = 0;

    virtual int size() = 0;

    virtual void clear() = 0;
};


#endif //DATA_STRUCTURES_DICT_H
