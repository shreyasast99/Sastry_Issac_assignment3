#include "ItemType.h"
#include  <iostream>

using namespace std;

//constructor
template<class T>
ItemType<T>::ItemType(){
}
//print method
template<class T>
void ItemType<T>::print(){
  cout<<value<<endl;
}
//Comparison Method
template<class T>
Comparison ItemType<T>::compareTo(ItemType item){
  if(value<item.value)
    return LESS;
  else if(value>item.value)
    return  GREATER;
  else
    return EQUAL;
}
//returns the value of type ItemType
template<class T>
int ItemType<T>::getValue() const{
  //cout<<"value :" << value << endl;
  return value;
}
//intiializes the value into number
template<class T>
void ItemType<T>::initialize(T number){
    value=number;
}
