#include<iostream>
using namespace std;

struct node{
            int data;
            node *next;
            node(int value)
                {
                  data=value;
                  next=NULL;
                }
           };


int main()
{
    node *head=NULL;
    node *temp=new node(1);
    head=temp;
    temp=new node(2);
    node *temp1;
    temp1=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;

    temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<< " ";
        temp1=temp1->next;
    }
    return 0;
}
