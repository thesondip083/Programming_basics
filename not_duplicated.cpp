/*A simple program to remove duplicate elements from array*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
     int ara[]={1,2,3,2,3,4,6,7,4,9,11,2,11};
    int len=sizeof(ara)/sizeof(ara[0]);
    sort(ara,ara+len);
    cout<<"The sorted array is now:"<<endl;
    for(int i=0;i<len;i++)
        cout<<ara[i]<<" ";
    cout<<endl;

    int j=0,cnt;
    for(int i=0;i<len;i++)
    {
        cnt=0;
        while(ara[i]==ara[i+1])
        {
            cnt++;
            i++;
        }
        if(cnt==0) ara[j++]=ara[i];
    }
    cout<<"After removing the duplicate elements:"<<endl;
    for(int i=0;i<j;i++)
        cout<<ara[i]<<" ";
    return 0;
}

