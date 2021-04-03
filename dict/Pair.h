//
// Created by masc9 on 03/04/2021.
//

#ifndef DATA_STRUCTURES_PAIR_H
#define DATA_STRUCTURES_PAIR_H

template <typename K, typename T>
class Pair {

private:
    K key;
    T value;


public:

    Pair() {}


    Pair(const Pair& obj){

        key = obj.key;
        value = obj.value;

    }

    Pair& operator =(const Pair& obj){
        key = obj.key;
        value = obj.value;

        return *this;
    }

    Pair(const K& key, const T& value){

        this->key = key;
        this->value = value;

    }

    const K& getKey() {
        return key;
    }

    const  T& getValue() {
        return value;
    }

};


#endif //DATA_STRUCTURES_PAIR_H
