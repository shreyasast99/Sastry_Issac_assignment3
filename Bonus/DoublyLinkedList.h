#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include <iostream>

template<typename T>
struct NodeType{
    T data;
    NodeType *next;
    NodeType *back;
};

template<class ItemType>
class DoublyLinkedList{
private:
  int length; //length in powerpoint
  NodeType<ItemType> *head;
  NodeType<ItemType> *tail;
  NodeType<ItemType> *currentPos;
  NodeType<ItemType> *last;
  NodeType<ItemType> *predLoc;
  NodeType<ItemType> *postLoc;
  NodeType<ItemType> *listData;
  NodeType<ItemType> *location;
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
