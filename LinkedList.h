#ifndef LinkedList_H
#define LinkedList_H

#include <string>

class  StringNode {
    private:
        std::string elem;
        StringNode *next;

    friend class StringLinkedList;     
};

class StringLinkedList {                        // Class linked list of strings
    private:
        StringNode *head;                       // pointer to the head of list

    public:
        StringLinkedList();                     // empty list construtor               
        ~StringLinkedList();                    // descructor
        bool empty() const;                     // is list empty
        const std::string& front() const;       // get front element
        void addFront( const std::string& e);   // add to front of list
        void removeFront();                     // remove front item list
        void showAll();                    
};

#endif
