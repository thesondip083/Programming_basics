/*
A virtual function a member function which is declared within a base class and
is re-defined(Overriden) by a derived class.

declare a function in the base class
override it on the derived class
make a base class pointer in the main function
call the derived class function using the base class pointer
if we not declared it as virtual then the pointer will the base class function though we
give it reference of the derived class object.To access the function of derived class use
virtual keyword in the base class.
*/


#include<bits/stdc++.h>
using namespace std;


class person{
   public:
       virtual void pr(){
         cout<<"i am base class"<<endl;
       }
};

class student: public person
{
   public:
       void pr(){
         cout<<"i am student derived class"<<endl;
       }

};

int main()
{
    //simple function call by creating objects
    person q;
    q.pr();
    student susmoy;
    susmoy.pr();


    //using pointer
    person *p;
    p->pr();
    student sondip;
    p=&sondip;
    p->pr();


    return 0;
}
