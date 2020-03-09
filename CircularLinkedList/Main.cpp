#include<fstream>
#include<iostream>
#include "CircularLinkedList.h"
using namespace std;
int main(int argc, char *argv[]){
  CircularLinkedList list;
  ItemType item;
  int input;
  fstream fs;
  fs.open(argv[1], std::fstream::in);
  if (fs.is_open())
    {
      fs >> input;
      while (!fs.eof())    
	{
	  item.initialize(input);
	  list.insertItem(item);
	  fs >> input;    
	}
    }
  
 else{
   cout << "Failed to open the input file" << std::endl;
   return 0;
 }
}
