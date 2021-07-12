//C++ program to create a linked list of three nodes(using one head variable)
//not the general method 
#include <iostream>
using namespace std;

struct Node //used for storing data and address of next node
{
    int data ;
    Node* next; //self referential structure
    
    node(int x) //constructor
    {
        data = x; //integer
        next = NULL; //next as null
    }
};

int main()
{
  //nodes 
	Node *head = new Node(10);
	head-> next  = new Node(20);
	head-> next ->next = new Node(30);
	return 0;
}
