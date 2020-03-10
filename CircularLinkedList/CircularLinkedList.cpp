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
/*
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
*/
    currentPos=head;
  NodeType *insert=new NodeType;
  insert->item=item;
  last=new NodeType;

  //checking if there is duplicates
  if(searchItem(item)!=-1){
      cout<<"Sorry. You cannot insert the duplicate item"<<endl;
  }
  else{
      //if the list is not empty
      while(currentPos!=NULL){
          //if inserting to the beginning if it's less than head
          if(head->item.compareTo(insert->item)==GREATER){
              insert->next=head;
              head=insert;
              predLoc=currentPos->next;
              last->next=head;
          }
          else{//used for middle/end insertion(if head<insert)
              currentPos=head;
              while(currentPos->next!=NULL&&currentPos->next->item.compareTo(insert->item)==LESS){
                  currentPos=currentPos->next;
              }
              //end
              if(currentPos->next==head){
                  currentPos->next=insert;
                  //currentPos->next should equal the last node for CIRCULAR LINKED LIST
                  break;
              }

              //middle
              if(currentPos->next->item.compareTo(insert->item)==GREATER){
              predLoc=currentPos;
              postLoc=currentPos->next;
              predLoc->next=insert;
              insert->next=postLoc;
              break;
              }

          }
          currentPos=predLoc;
      }

      //if the list is empty
      if(length==0){
          //cout<<"List was empty before"<<endl;
          head=insert;
          last=insert;
          //current=head;
      }
      //head->next=location;

      length=length+1;
  }
  currentPos=head;
//  delete insert;

}
int CircularLinkedList::searchItem(ItemType item){
  currentPos=head;
  int count=-1;
  while(currentPos!=NULL){
      count=count+1;
      //cout<<"Current Position: "<<currentPos->item.getValue()<<" Count: "<<count<<endl;
      if(currentPos->item.compareTo(item)==EQUAL){
          currentPos=head;
          return count;
      }
      else{
          currentPos=currentPos->next;
      }
  }
  currentPos=head;
  return -1;

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

