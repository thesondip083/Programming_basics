#include<bits/stdc++.h>
using namespace std;
//pointer is type of variable which holds the address of another same type variable
int main()
{
    int a=100;
    int *p; //taking a integer pointer
    p=&a;  //holding the address of the variable a
    cout<<p<<" "<<*p <<" "<<&p<<endl; //by *p we print the value the pointer is indicated
    int roll[]={1,2,3,4,5};
    int *rp; //roll pointer
    rp=roll;//array roll holds the first address or roll[0] address of the array itself
    cout<<rp<<" "<<*rp<<" "<<rp+1<<" "<<*(rp+1)<<endl; //by incrementing the value by rp+1 we are
    //going to the next address which is 4 byte ahead as we are using int(4 bytes).*(rp+1)gives the
    //next address value
    //A[i]= *(A+i)giving the same result and ptr=A is also valid

    return 0;
}
