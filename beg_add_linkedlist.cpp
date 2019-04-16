#include<iostream>
using namespace std;
struct node{
 node *next;
 int data;
};

node *head;//declaring as global

void beg_insert(int x)
{
    node *temp=new node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    temp->next=head;
    head=temp;

}

void print()
{
    node *traverse;
    traverse=head;
    while(traverse!=NULL)
    {
        cout<<traverse->data<<" ";
        traverse=traverse->next;
    }
}

void dlt(int value)
{
    node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        if(temp->data==value)
        {
            head=temp->next;
            break;
        }
        if((temp->next)->data==value)
        {
            temp->next=(temp->next)->next;
            break;
        }
        temp=temp->next;
    }
}

int main()
{
    head=NULL;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        beg_insert(x);
        print();
    }
    int del_value;
    cout<<"enter the value to be deleted:";
    cin>>del_value;
    dlt(del_value);
    print();
    return 0;
}
