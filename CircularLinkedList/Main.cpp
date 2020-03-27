#include<fstream>

#include<iostream>

#include "CircularLinkedList.h"

using namespace std;

int main(int argc, char *argv[]){

    CircularLinkedList list;

    string userInput="";

    ItemType item;

    int input;//input 

    int number=0;//nums to add

    std::fstream fs;

    fs.open(argv[1], std::fstream::in);

    if (fs.is_open()){

//        cout<<"gf"<<endl;

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

//    list.print();



    cout<<"insert (i), delete (d), length(l), print (p), quit (q)"<<endl;

//    cout<<"Enter a command: ";

//    cin>>userInput;

    while(userInput.compare("q")!=0){

        cout<<"\nEnter a command: ";

        cin>>userInput;



//        cout<<"userInput: "<<userInput<<endl;

        /*

        if((userInput.compare("p")!=0)&&(userInput.compare("")!=0)&&(userInput.compare("d")!=0)&&(userInput.compare("i")){

            //          cout<<"Hi"<<endl;

            list.print(); //prints the list

            cout<<endl;

            }*/

        ItemType temp;

        //insert value

        if(userInput.compare("i")==0){

            cout<<"Number to insert: ";

            cin>>number;

            temp.initialize(number);

            

            list.insertItem(temp);

            list.print();

            cout<<endl;

        }

        else if(userInput.compare("d")==0){

            cout<<"Number to delete: ";

            cin>>number;

            temp.initialize(number);

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

            cout<<"Quitting program...";

        }



        //invalid command

        else{

            cout<<"Invalid command, try again!";

        }

        cout<<endl;

    }

}

/*

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

    

//    cout<<"Deleting 4"<<endl;

    //  list.deleteItem(item4);

    //list.print();

    //list.print();



    cout<<"\nDeleting 1"<<endl;

    list.deleteItem(item2);

    list.print();



    cout<<"\nDeleting 3"<<endl;

    list.deleteItem(item3);

    list.print();



    cout<<"Print Reverse: "<<endl;

    list.printReverse();

   

    return 0;

*/



//}
