#include "ItemType.h"
#include  <iostream>

using namespace std;

//constructor
//template<class T>
ItemType::ItemType(){
}
//print method
//template<class T>
void ItemType::print(){
  cout<<value<<endl;
}
//Comparison Method
//template<class T>
Comparison ItemType::compareTo(ItemType item){
  if(value<item.value)
    return LESS;
  else if(value>item.value)
    return  GREATER;
  else
    return EQUAL;
}
//returns the value of type ItemType
//template<class T>
int ItemType::getValue() const{
  //cout<<"value :" << value << endl;
  return value;
}
//intiializes the value into number
//template<class T>
void ItemType::initialize(T number){
    value=number;
}
