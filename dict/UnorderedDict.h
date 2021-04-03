//
// Created by masc9 on 03/04/2021.
//

#ifndef DATA_STRUCTURES_UNORDEREDDICT_H
#define DATA_STRUCTURES_UNORDEREDDICT_H

#include "Dict.h"
#include "Pair.h"
#include "../list/ArrayList.h"


template <typename K, typename T>
class UnorderedDict : Dict<K, T> {

private:

    ArrayList<Pair<K, T>>* list;


public:

    explicit UnorderedDict(int size = 10){

        list = new ArrayList<Pair<K, T>>(size);

    }

    ~UnorderedDict() override {

        delete list;

    }

    void put(const K &key, const T &value) override {

        Pair<K, T> tmp(key, value);

        list->append(tmp);

    }

    T remove(const K &key) override {

        T tmp = find(key);

        if ( tmp != NULL) list->remove();

        return tmp;
    }

private:
    void clear() override {

        list->clear();
    }

public:
    T find(const K &key) const override {

        for (list->moveToStart(); list->currentPos() < list->length(); list->next()){

            Pair<K, T> tmp = list->getValue();

            if ( tmp.getKey() == key){
                return tmp.getValue();
            }

        }

        return NULL;
    }

    int size() override {
        return list->length();
    }

public:


};


#endif //DATA_STRUCTURES_UNORDEREDDICT_H
