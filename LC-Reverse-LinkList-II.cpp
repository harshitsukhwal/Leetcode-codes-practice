#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};
void printlist(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
        
    }
    
}

int main()
{
    Node*head=NULL;
    Node*second=NULL;
    Node*third=NULL;
    Node*fourth=NULL;
    Node*fifth=NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    fifth = new Node();
    
    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=fifth;
    
    fifth->data=5;
    fifth->next=NULL;
    
    Node*temp1=NULL;
    Node*temp2=NULL;
    Node*temp3=NULL;
    temp1 = new Node();
    temp2= new Node();
    




    printlist(head);
    
/*
    while (l<=r)
    {
        if(l ==r)
        {
            break;
        }
        else
        {
            Node[r-1];
        }

    }
    */

    


}