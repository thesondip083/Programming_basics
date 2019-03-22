#include<bits/stdc++.h>
using namespace std;
//binary_search works on the sorted arrays to find a specific value way faster than normal search
int main()
{
    int num[]={1,2,5,6,8,9,3};
    int n=sizeof(num)/sizeof(num[0]);
    sort(num,num+n);//sorting the array
    cout<<"Enter the number you want to find:";
    int input;
    cin>>input;
    int start=0,endd=n-1,mid;
    while(start<=endd)
    {
        mid=(start+endd)/2;
        if(input==num[mid])
           {
               cout<<"The number is founded at the position:"<<mid+1;
               return 0;
           }
        else if(input<num[mid])
        {
            endd=mid-1;
        }
        else start=mid+1;
    }
    return 0;
}

