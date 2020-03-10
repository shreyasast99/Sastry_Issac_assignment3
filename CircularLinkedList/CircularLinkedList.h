#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H
#include <iostream>
#include "ItemType.h"

const int MAX_ITEM=5 ;
  struct NodeType{
    ItemType item;
    NodeType *next;
  };

class CircularLinkedList{
public:
  CircularLinkedList();
  ~CircularLinkedList();
  void FindItem(NodeType *listData, ItemType &item,NodeType *&location, NodeType *&predLoc, bool& found);
  void insertItem(ItemType &item);
  void deleteItem(ItemType &item);
  int lengthIs() const;
  int print();
    int searchItem(ItemType item);
private:
    int length;
    NodeType *listData; //listData->next is the first element
    NodeType *location; //same as current
    NodeType *predLoc; //the node before location
    NodeType *head;
    NodeType *currentPos;
    NodeType *last;
    NodeType *postLoc;
    //NodeType *predLoc;
};
#endif
