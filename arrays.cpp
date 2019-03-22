#include<bits/stdc++.h>
using namespace std;

int main()
{
    char name[]="sondip";
    char *np;//name pointer
    np=name; //name is a pointer and np also
    cout<<np<<endl;
    np[0]=np[0]-32;//A=65 ,a=97, 97-65=32 add 32 to lowercase from Uppercase
    cout<<np<<name;
    //using pointer is important in case of arrays because we dont want to pass
    //the full array and when we pass the pointer we can easily increment their value
    //by 1(or more in cases)and access the next element of the array
    return 0;
}

