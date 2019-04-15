#include <bits/stdc++.h>
using namespace std;

bool isprime(int num)
{

    if(num%2==0)
    {
       return false;
    }
    for(int i=3;i<=sqrt(num);i+=2)
    {
        if(num%i==0)
        {
           return false;
        }
    }
    return true;
}

int main()
{
    int n=100000;
    cout<<"primes number in the range are:"<<endl;
    for(int i=2;i<n;i++)
    {
        if(isprime(i))
        {
           cout<<i<<" ";
        }
    }

    return 0;
}
