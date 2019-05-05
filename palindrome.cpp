/*
A Palindrome number is a number that remains the same when its digits are reversed. Like 16461,
for example: we take 121 and reverse it, after revers it is same as original.


    the process is simple to check:
    let us assume number=121
    121%10=1 n=0*10+1=1;  121/10=12;           by modulus we get the last digit and
    12%10=2  n=1*10+2=12; 12/10=1;             then we need only the other digits so divide by 10
    1%10=1   n=12*10+1=121;   1/10=0;              and multiply it by 10 gives back the real order
    loop breaks.
*/
#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int copy_num=num;
    int n=0;
    while(copy_num!=0)
    {
        n=n*10+(copy_num%10);
        copy_num=copy_num/10;
    }
    if(n==num) cout<<"Its a palindrome"<<endl;
    else cout<<"Its not a palindrome"<<endl;
    return 0;
}

