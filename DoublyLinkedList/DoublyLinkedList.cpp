#include "DoublyLinkedList.h"
#include <string>
#include <iostream>
using namespace std;

DoublyLinkedList::DoublyLinkedList(){
  length=0;
  listData= new NodeType;
  location=listData->next;
  last=new NodeType;
}
DoublyLinkedList::~DoublyLinkedList(){
}
void DoublyLinkedList::insertItem(ItemType &item){
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
  insert->data=item;
  //last=new NodeType;

  //checking if there is duplicates
  if(searchItem(item)!=-1){
      cout<<"Sorry. You cannot insert the duplicate item"<<endl;
  }
  else{
      //if the list is empty
      if(length==0){
          //cout<<"List was empty before"<<endl;
          head=insert;
          last=insert;
          //last->next=head;
          //current=head;
      }

      if(length!=0){
      //if the list is not empty
          while(currentPos->next!=head){
              //if inserting to the beginning if it's less than head
              if(head->data.compareTo(insert->data)==GREATER){
                  insert->next=head;
                  head=insert;
                  predLoc=currentPos->next;
                  last->next=head;
              }
              else{//used for middle/end insertion(if head<insert)
                  currentPos=head;
                  while(currentPos!=last&&currentPos->next->data.compareTo(insert->data)==LESS){
                      currentPos=currentPos->next;
                  }
                  //end
                  if(currentPos==last&&(currentPos->data.compareTo(insert->data)==LESS)){
                      currentPos->next=insert;
                      last=insert;
                      last->next=head;
                      //currentPos->next should equal the last node for CIRCULAR LINKED LIST
                      break;
                  }

                  //middle
                  if(currentPos->next->data.compareTo(insert->data)==GREATER){
                      predLoc=currentPos;
                      postLoc=currentPos->next;
                      predLoc->next=insert;
                      insert->next=postLoc;
                      break;
                  }

              }
              currentPos=predLoc;
          }
      }
      //head->next=location;

      length=length+1;
      if(length>1){
          cout<<"This is last->next: "<<last->next->data.getValue()<<endl;
      }
  }
  currentPos=head;
//  delete insert;

}
int DoublyLinkedList::searchItem(ItemType item){
  currentPos=head;
  int count=-1;
  for(int i=0;i<length;i++){
      count=count+1;
      //cout<<"Current Position: "<<currentPos->item.getValue()<<" Count: "<<count<<endl;
      if(currentPos->data.compareTo(item)==EQUAL){
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

void DoublyLinkedList::deleteItem(ItemType &item){
//if it is an empty list
    if(length==0){
        cout<<"You cannot delete from an empty list"<<endl;
    }
    else if(searchItem(item)==-1){
        cout<<"Item not found"<<endl;
    }
    //for everything else... regular deleting
    else{
        //if deleting from the middle
        if((searchItem(item)!=0)&&(searchItem(item)!=length-1)){
            currentPos=head;
            predLoc=currentPos;
            int count=searchItem(item); //saves the index in where the item is found
            //takes the item for the predLoc
            for(int i=0;i<count-1;i++){
                predLoc=predLoc->next;
            }
            //taking value we want to remove (current)
            currentPos=predLoc->next;
            //taking the post value so we can connect
            postLoc=currentPos->next;
            predLoc->next=postLoc; //bascially skipping the current pos because we are deleting that
            delete currentPos;//I ADDED THIS NOW
        }
        //if it deleting from beginning
        if(searchItem(item)==0){
            NodeType* temp=head;
            head=head->next; //setting the actual value into the next value
            last->next=head;
            delete temp;
        }
    //if it is deleting the end
        if(searchItem(item)==length-1){
            currentPos=head;
            for(int i=0;i<searchItem(item);i++){
                currentPos=currentPos->next;
            }

            //delete currentPos;//NEW
            currentPos->next->next=head; //setting the last value to NULL because item is deleted
            last=currentPos->next;
        }
        length--; //size decreases if we delete an item
    }
    currentPos=head;
    if(length>1){
        cout<<"This is last->next: "<<last->next->data.getValue()<<endl;
    }

}
int DoublyLinkedList::lengthIs() const{
    return length;
}
void DoublyLinkedList::print(){
  for(int i=0;i<lengthIs();i++){
    cout<<currentPos->data.getValue()<<" ";
    currentPos=currentPos->next;
  }
}
void DoublyLinkedList::printReverse(){

}

