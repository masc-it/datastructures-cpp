#include <iostream>
#include "Array.h"

#include "DynamicArray.h"
#include "Stack.h"
#include "MergeSort.h"
#include "list/ArrayList.h"
#include "list/LinkedList.h"

void llTests();
void stackTests();
void mergeTests();
void llTest2();

int main() {
    std::cout << "Hello, World!" << std::endl;

    //llTests();
    //stackTests();

    //mergeTests();

    llTest2();
    return 0;
}

void llTest2(){

    ArrayList<int> list(10);

    list.append(0);
    list.append(3);

    list.remove();
    for ( list.moveToStart(); list.currentPos() < list.length(); list.next()){

        int el = list.getValue();

        std::cout << el << std::endl;

    }

    LinkedList<int> ll;

    ll.insert(10);
    ll.append(20);

    for ( ll.moveToStart(); ll.currentPos() < ll.length(); ll.next()){

        int el = ll.getValue();

        std::cout << el << std::endl;

    }



}


void mergeTests(){

    auto s = MergeSort();

    std::vector<int> v1;
    v1.push_back(10);
    v1.push_back(12);
    v1.push_back(1);
    v1.push_back(5);
    v1.push_back(120);

    v1.push_back(2);
    v1.push_back(11);

    /*auto res = s.merge_sort(v1);
    for ( int i = 0; i < res.size(); i++){
        std::cout << res[i] << " ";
    }*/
    std::cout << std::endl;
    s.merge_sort_inplace(&v1, 0, v1.size()-1);
    for ( int i = 0; i < v1.size(); i++){
        std::cout << v1[i] << " ";
    }
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
