#include<fstream>
#include<iostream>
#include "DoublyLinkedList.h"
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
    DoublyLinkedList list;

    ItemType item1;
    item1.initialize(2);
    list.insertItem(item1);
    //cout<<"Added Item 1 (2)\n"<<endl;
    
    ItemType item2;
    item2.initialize(1);
    list.insertItem(item2);
    //cout<<"Added Item 2 (1)\n"<<endl;
    
    
    ItemType item3;
    item3.initialize(3);
    list.insertItem(item3);
    //cout<<"Added Item 3 (3)\n"<<endl;
    
      ItemType item4;
    item4.initialize(4);
    list.insertItem(item4);
    //cout<<"Printing List After Insertion"<<endl;
    list.print();
    //cout<<"Added Item 4 (4)\n"<<endl;
    
    //list.print();
    //cout<<"Print Reverse: "<<endl;
    //list.printReverse();
    /*
    cout<<"Deleting 4"<<endl;
    list.deleteItem(item4);
    //list.print();
    //list.print();

    cout<<"\nDeleting 1"<<endl;
    list.deleteItem(item2);
    list.print();
    */
    cout<<"Print Reverse: "<<endl;
    list.printReverse();
   
    return 0;
/*
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
*/
}
