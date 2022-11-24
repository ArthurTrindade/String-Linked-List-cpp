#include <iostream>
#include <vector>

#include "LinkedList.h"

int main() {

    StringLinkedList list;
    list.addFront("Test 1");

    list.showAll();

    std::cout << '\n';
    list.addFront("Test 2");
    list.showAll();

    std::cout << '\n';
    list.addFront("Test 3");
    list.showAll();

    std::cout << '\n';
    list.removeFront();
    list.showAll();

    return 0;
}