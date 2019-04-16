#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head;

void insert(int x)
{
  node *temp=new node();
  temp->data=x;
  temp->next=NULL;
  if(head==NULL)
  {
    head=temp;
    //cout<<x<<" ";
    return;
    //cout<<"head="<<head<<endl;
  }
  node *temp1;
  temp1=head;
  while(temp1->next!=NULL)
  {
      temp1=temp1->next;
  }
  temp1->next=temp;
}

void print()
{
    node *t;
    t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}

int main()
{
    head=NULL;
    int n,x;
    cout<<"Enter the size:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<endl<<"Enter data no "<<i+1<<":";
        cin>>x;
        insert(x);
        print();
    }
    return 0;
}

