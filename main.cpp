#include <iostream>
#include "Array.h"
#include "LinkedList.h"
#include "DynamicArray.h"
#include "Stack.h"

void llTests();
void stackTests();

int main() {
    std::cout << "Hello, World!" << std::endl;

    //llTests();
    stackTests();

    return 0;
}

void stackTests(){

    Stack<int> s;

    s.push(10);
    s.push(11);

    std::cout << s.pop() << std::endl;
    std::cout << s.peek() << std::endl;
    std::cout << s.pop() << std::endl;
    std::cout << s.peek() << std::endl;


}

void llTests(){

    LinkedList<int> ll;

    ll.addFirst(10);
    ll.addFirst(11);
    ll.addLast(12);

    ll.addAt(3, 13);

    ll.addAt(4, 9);
    std::cout << ll.getFirst() << std::endl;

    std::cout << ll.getLast() << std::endl;


}


void arrayTests(){
    DynamicArray<int> da(20);


    for (int i = 0; i < 10; i++){

        da.add(i);
        std::cout << da.get(i) << std::endl;

    }

    std::cout << "\n" << std::endl;

    da.removeAt(3);
    for (int i = 0; i < da.size(); i++){

        std::cout << da.get(i) << std::endl;

    }
    std::cout << "OOP\n" << std::endl;
    da.clear();
    for (int i = da.size(); i < 20; i++){

        da.add(i);
        std::cout << da.get(i) << std::endl;

    }

    std::cout << "\n" << std::endl;
}
