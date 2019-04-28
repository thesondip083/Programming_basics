#include<iostream>
using namespace std;

struct node{
    node *next;
    int data;
//    node(int d)
//    {
//        data=d;
//        next=NULL;
//    }
};

node *head=NULL;
void inserting(int value)
{
    //node *temp=new node(data);
    node *temp=new node();
    temp->data=value;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }

    temp->next=head;
    head=temp;
}

void vanish()
{
   node *tra;
   tra=head;
   if(head==NULL)
   {
       cout<<"no elements left!"<<endl;
       return;
   }
   while(1)
   {
       if((tra->next)->next==NULL)
       {
         tra->next=NULL;
         break;
       }
       tra=tra->next;
   }

}

void print(){
    cout<<"the state of queue is now: ";
    node *temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    char ch;
    int value;

    while(1){
    cout<<"Enter i for insert and d for delete"<<endl;
    cin>>ch;
    if(ch=='i')
    {
        cout<<"insert the value to add:";
        cin>>value;
        inserting(value);
        print();
    }
    if(ch=='d')
    {
       vanish();
       print();
    }
    }
    return 0;
}
