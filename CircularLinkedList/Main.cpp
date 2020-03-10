#include<fstream>
#include<iostream>
#include "CircularLinkedList.h"
/*
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
*/
using namespace std;
int main(int argc, char *argv[]){
    CircularLinkedList list;
    string userInput="";
    //SortedLinkedList list;
    ItemType item;
    int input;
    int number=0;
    std::fstream fs;
    fs.open(argv[1], std::fstream::in);
    if (fs.is_open()){
        fs >> input;
        while (!fs.eof()){
            item.initialize(input);
            list.insertItem(item);
            fs >> input;
        }
    }
    else{
        std::cout << "Failed to open the input file" << std::endl;
        return 0;
    }


        cout<<"Commands:\n\n(i) - Insert value\n(d) - Delete value\n(s) - Search value\n(n) - Print next iterator value\n(r) - Reset iterator\n(p) - Print list\n(l) - Print length\n(b) - Reverse\n(q) - Quit program"<<endl;
while(userInput.compare("q")!=0){
        cout<<"\nEnter a command: ";
        cin>>userInput;
        cout<<endl;
        if((userInput.compare("p")!=0)&&(userInput.compare("s")!=0)&&(userInput.compare("n")!=0)){
            list.print(); //prints the list
            cout<<endl;
        }
        ItemType temp;
        //insert value
        if(userInput.compare("i")==0){
            cout<<"Enter number: ";
            cin>>number;
            temp.initialize(number);
            cout<<endl;
            list.insertItem(temp);
            list.print();
        }
        else if(userInput.compare("d")==0){
            cout<<"Enter a value to delete: ";
            cin>>number;
            temp.initialize(number);
            cout<<endl;
            list.deleteItem(temp);
            list.print();
        }
        else if(userInput.compare("p")==0){
            list.print();
        }
        else if(userInput.compare("l")==0){
            cout<<"List Length is "<<list.lengthIs();
        }
        else if(userInput.compare("q")==0){
            cout<<"Quitting prorgam...";
        }
        //invalid command
        else{
            cout<<"Invalid command, try again!";
        }
        cout<<endl;
    }
}

