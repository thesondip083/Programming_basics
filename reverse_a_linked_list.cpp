/*
A simple program that reverse a linked list
*/

#include<iostream>
#include<stack>
using namespace std;
struct node{
   int data;
   node *next;
};

node *head=NULL;

int main()
{
    int n,val;
    cout<<"enter the number of elements:";
    cin>>n;
    cout<<"enter element:";
    cin>>val;
    node *temp=new node();
    temp->data=val;
    temp->next=NULL;
    head=temp;

    //creating a linked list
    for(int i=1;i<n;i++)
    {
        cin>>val;
        node *tempp=new node();
        tempp->data=val;
        tempp->next=NULL;
        node *temp1;
        temp1=head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=tempp;



    }
    //printing the linked list
    node *temp2;
    temp2=head;
    cout<<"The linked list is:"<<endl;
    while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }

   cout<<endl;




   //reversing the linked list
   //take 3 pointer curr,next,prev
   //curr means the current node,next point to the next node to visit,and prev is the prev node
   //initially curr is head and other 2 are null
   //next step store the next node which is pointed  by current in next pointer,and then
   //make the current node to point the previous node
   //when pointing is done,now the curr node will be previous and curr will be the same as next node.
   //while we reach at the last of the list we found a null pointer and thus return
   //and now new head is the prev node.
   //a nice gif is in https://www.geeksforgeeks.org/reverse-a-linked-list/
   node *curr=head;
   node *prev=NULL,*next=NULL;

   while(curr!=NULL)
   {
       next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;
   }
   head=prev;

   node *t=head;
   cout<<"After reversing the linked list is:"<<endl;
   while(t!=NULL)
   {
       cout<<t->data<<" ";
       t=t->next;
   }
    return 0;
}







