/*
  Check whether a linked list is palindrome or not
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
    node *temp2;
    temp2=head;
    cout<<"The linked list is:"<<endl;
    while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }

   cout<<endl;


   //pushing all the data of linked list to stack
   node *s=head;
   stack<int>d;
   while(s!=NULL)
   {
       d.push(s->data);
       s=s->next;
   }

   //again traversing the linked list and checking with stack value
   //as stack stores values in reverse order of linked list,
   //if all the element of linked list matches the stack top data(pop is done when a data is checked)
   //then its a palindrome else not
   node *st=head;
   int flag=0;
   while(st!=NULL)
   {
       if((st->data)!=d.top())
       {
           flag=1;
           break;
       }
       d.pop();
       st=st->next;
   }
   if(flag==1) cout<<"not a palindrome"<<endl;
   else cout<<"Palindrome"<<endl;

    return 0;
}







