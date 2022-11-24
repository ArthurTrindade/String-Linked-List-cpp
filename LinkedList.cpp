#include <iostream>

#include "LinkedList.h"

StringLinkedList::StringLinkedList() : head{NULL} {}

StringLinkedList::~StringLinkedList() {
    while ( !empty() )
        removeFront();
}

bool StringLinkedList::empty() const {
    return head == NULL;
}

const std::string& StringLinkedList::front() const {
    return head->elem;
}

void StringLinkedList::addFront( const std::string& e) {
    StringNode *v = new StringNode;     // create new node 
    v->elem = e;                        // store data
    v->next = head;                     // head now follow v
    head = v;                           // is now the head
}

void StringLinkedList::removeFront() {
    StringNode *old = head;             // save current item
    head = old->next;                   // skip over old head
    delete old;                         // delete the old head
}

void StringLinkedList::showAll() {
    StringNode *p;

    if ( empty() ) {
        std::cout << "Lista vazia!\n";
        return;
    } else {
        p = head;
        while ( p != NULL  ) {
            std::cout << p->elem << std::endl;
            p = p->next;
        }   
    }
}