//
// Created by mascIT on 02/04/2021.
//

#ifndef DATA_STRUCTURES_LIST_H
#define DATA_STRUCTURES_LIST_H

template <typename T>
class List {

    List(const List&) {}

public:
    List() {}

    ~List() {

    }

    // clears the list
    virtual void clear() = 0;

    // add new element to the list (current loc)
    virtual void insert(const T& element) = 0;

    // add an element to the end of the list
    virtual void append(const T& element) = 0;

    virtual T remove() = 0;

    virtual void moveToStart() = 0;

    virtual void moveToEnd() = 0;

    virtual void prev() = 0;

    virtual void next() = 0;

    virtual int length() const = 0;

    virtual int currentPos() const = 0;

    virtual void moveToPos(int pos) = 0;

    virtual const T& getValue() const = 0;



};


#endif //DATA_STRUCTURES_LIST_H
