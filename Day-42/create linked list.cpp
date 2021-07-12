//C++ program to create a linked list of three nodes
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
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);
	
	//linking
	head->next = temp1;
	temp1->next = temp2;
	
	return 0;
}
