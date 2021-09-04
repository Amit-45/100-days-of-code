#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class linked_list
{
    Node *head;
    public:
    linked_list(){
        head = nullptr;
    }
    void insert_at_beginning(int data)
    {
        if(head==nullptr)
        {
            head = new Node;
            head->data = data;
            head->next = nullptr;
            return;
        }
        Node *new_node = new Node;
        new_node->data = data;
        new_node->next = head;
        head = new_node;
    }
    
    void print_list(){
        Node *n = head;
        while(n!=nullptr){
            cout<<n->data<<" ";
            n=n->next;
        }cout<<endl;
    }
    void reverse_list()
    {
        Node *prev = nullptr, *curr = head, *ahead;
        while(curr!=nullptr){
            ahead = curr->next;
            curr->next = prev;
            prev=curr;
            curr=ahead;
        }
        head = prev;
    }
};
int main()
{
    int n; cin>>n;
    linked_list a;
    int value;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        a.insert_at_beginning(value);
    }
    cout<<"Your list: "<<endl;
    a.print_list();
    a.reverse_list();
    cout<<"Reversed list "<<endl;
    a.print_list();
    return 0;
}

