//C++ program to create a linked list of three nodes
//not the general method
#include <iostream>
using namespace std;

void printlist(Node* head)
{
   Node *curr = head;
   while(curr!=NULL)
   {
       
   cout<<(curr->data)<<" ";
   curr=curr->next;
   
   } 
}

struct Node //used for storing data and address of next node
{
    int data ;
    Node* next; //self referential structure
    
    Node(int x) //constructor
    {
        data = x; //integer
        next = NULL; //next as null
    }
};

int main()
{
	Node* head = new Node(10);
	head-> next  = new Node(20);
	head-> next ->next = new Node(30);
	head-> next ->next ->next = new Node(40);
	printlist(head);
	return 0;
}
