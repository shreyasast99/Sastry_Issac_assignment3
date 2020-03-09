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
    NodeType *newNode;
    bool found;
    newNode = new NodeType;
    newNode->info = item.getValue();
    if(listData!=NULL){
        
    }
}
void FindItem(NodeType *listData, NodeType *&predLoc, bool& found){
    bool moreToSearch = true;
    location = listData->next;
    predLoc = listData;
    found=false;
    while(moreToSearch && != found){
        if(item <location->info){

        }
    }
}
void CircularLinkedList::deleteItem(ItemType &item){
}
int CircularLinkedList::lengthIs() const{
}
int CircularLinkedList::print(){
}

