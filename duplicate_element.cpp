/*A program to take one element only once in an array*/
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
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(ara[i]!=ara[i+1])
        {
            //cout<<"ara[i]="<<ara[i]<<"     ara[i+1]="<<ara[i+1]<<"   ";
            ara[j++]=ara[i];
            //cout<<ara[j-1]<<" "<<endl;
        }
    }
    ara[j]=ara[len-1];
    //cout<<ara[j]<<endl;

    cout<<"After removing the array is now:"<<endl;
    for(int i=0;i<j;i++)
        cout<<ara[i]<<" ";



    return 0;
}
