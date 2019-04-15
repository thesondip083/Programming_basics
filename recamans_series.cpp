/*Recamans series is a series where each element follows the rule:
    a[0]=0;first element is 0;
    then if the next element a[n-1]-n>0 and not stored yet store the value(n is current position value)
    and if a[n-1]<0 store a[n-1]+n
    example:
    a[0]=0;
    now pos=1; 0-1=-1 so a[1]=a[0]+1=0+1=1 we get 0,1
    now pos=2; 1-2=-1 so a[2]=a[1]+2=1+2=3 we get 0,1,3
    now pos=3; 3-3=0 >=0 but 0 already appeard so a[3]=a[2]+3=3+3=6 we get 0,1,3,6
    now pos=4; 6-4=2 >0 and not apperad yet in the series so we get 0,1,3,6,2
    now pos=5; 2-5=-3<0 so a[5]=a[4]+5=2+5=7 we get 0,1,3,6,2,7
    .......goes on.
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int ara[n]={0};
    ara[0]=0; //first pos=0;
    int temp,j;
    for(int i=1;i<=n;i++) //taking each position
    {
        temp=ara[i-1]-i;
        int flag=0;
        for(j=0;j<i;j++)
        {
            if(ara[j]==temp|| temp<0) //if its already there or less then 0
            {
                ara[i]=ara[i-1]+i;  //ara[n]=ara[n-1]+n;
                flag=1;
            }
        }
        if(flag==0) ara[i]=temp;  //ara[n]=ara[n-1]-n;
    }

    for(int i=0;i<n;i++)
    {
        cout<<ara[i]<<" ";
    }
    return 0;
}
