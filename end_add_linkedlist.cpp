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
    cout<<endl;
    while(traverse!=NULL)
    {
        cout<<traverse<<":"<<traverse->data<<" ";
        traverse=traverse->next;
    }
}

void nth_insert(int pos,int val)
{
    node *temp=new node();
    temp->data=val;
    temp->next=NULL;
    node *tra;
    tra=head;

     if(pos==1)
     {
         temp->next=head;
         head=temp;
         return;
     }

    pos=pos-2;
    //cout<<"head="<<head<<" ";
    while(pos)
    {
       tra=tra->next;
      // cout<<"whileloop:"<<tra<<" ";
       pos--;
    }
    temp->next=tra->next;
   // cout<<"temp="<<temp<<" "<<"temp next="<<temp->next<<" ";
    tra->next=temp;
    //cout<<"tra="<<tra;
}

int main()
{
    head=NULL;
    int n=5;
    for(int i=1;i<=n;i++)
    {
        if(i==3) continue;
        beg_insert(i);
        print();
    }

    int pos,val;
    cin>>pos>>val;
    nth_insert(pos,val);
    print();
    return 0;
}

