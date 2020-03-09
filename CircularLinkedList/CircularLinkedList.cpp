#include "CircularLinkedList.h"
#include <string>
#include <iostream>
using namespace std;
CircularLinkedList:: CircularLinkedList(){
  length=0;
  listData= new NodeType;
  location=listData->next;
}
CircularLinkedList::~CircularLinkedList(){
}
void CircularLinkedList::insertItem(ItemType &item){
}
void CircularLinkedList::deleteItem(ItemType &item){
}
int CircularLinkedList::lengthIs() const{
}
int CircularLinkedList::print(){
}

