#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int noMhs;
    string name;
    Node* next;
    Node* prev;
};

Node* START = NULL;

void addnode() 
{
    Node* newNode = new Node(); // step 1: create a new node
    cout << "\nEnter the roll number of the student: ";
    cin >> newNode->noMhs; // assign value to the data field of the new node
    cout << "\nEnter the name of the student: ";
    cin >> newNode-> name; // assign value to the data field of the new node    

    // Insert the new node in the list 
    if (START == NULL || newNode->noMhs <= START->noMhs)
    { // step2 : insert the new Node at the beginning
    
        if (START != NULL && newNode->noMhs == START-noMhs)
        {
            cout << "\033[31mDuplicate roll numbers not allowed\033[0m" << endl;
            return;
        }        
        
    
    }
}