#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H
#include <iostream>
const int MAX_ITEM=5 ;
enum Comparison{LESS,EQUAL,GREATER};
class CircularLinkedList{
 public:
  CircularLinkedList();
  ~CircularLinkedList();
  void insertItem(ItemType &item);
  void deleteItem(ItemType &item);
  int lengthIs() const;
  int print();
 private:
  int length;
  NodeType *head;
};
#endif
