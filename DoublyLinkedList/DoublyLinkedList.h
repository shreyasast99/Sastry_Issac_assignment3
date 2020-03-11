#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include <iostream>
#include "ItemType.h"
struct NodeType{
    ItemType data;
    NodeType *next;
    NodeType *back;
};

class DoublyLinkedList{
private:
    int length; //length in powerpoint
    NodeType *head;
    NodeType *tail;
    NodeType *currentPos;
    NodeType *last;
    NodeType *predLoc;
    NodeType *postLoc;
    NodeType *listData;
    NodeType *location;
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    int lengthIs() const;
    void insertItem(ItemType &item);
    void deleteItem(ItemType &item);
    int searchItem(ItemType item);
    void printReverse();
    void print();
};

#endif
