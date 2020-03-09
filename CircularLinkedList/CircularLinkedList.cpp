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
  newNode->item = item;
  if(listData->item.compareTo(item)==LESS){
    //    FindItem(listData, item, location, predLoc, found);
    newNode->next=predLoc->next;
    predLoc->next= newNode;
    
    //if list is a last node, then we reassign it to listData
    if(listData->item.compareTo(item)==LESS){
      listData= newNode;
    }
  }
  //inserting into an empty list.
  else
    {
      listData= newNode;
      newNode->next=newNode;
    }
  length++;
}

void CircularLinkedList::FindItem(NodeType *listData, ItemType &item,NodeType *&location, NodeType *&predLoc, bool& found){
    bool moreToSearch = true;
    location = listData->next;
    predLoc = listData;
    found=false;
    while(moreToSearch && !found){
      if(item.compareTo(location->item)==LESS){
	  moreToSearch=false;
	}
	else if (item.compareTo(location->item)==EQUAL){
	  found=true;
	}
	else{
	  predLoc= location;
	  location=location->next;
	  moreToSearch= (location !=listData->next);
	}
    }
}
void CircularLinkedList::deleteItem(ItemType &item){
}
int CircularLinkedList::lengthIs() const{
}
int CircularLinkedList::print(){
}

