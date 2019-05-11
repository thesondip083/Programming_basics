/*
A program to find the sum of an array using recursion
*/
#include<iostream>
using namespace std;


int sum(int a[],int len)
{
    if(len<=0) return 0;
    else
    {
        return sum(a,len-1)+a[len-1];
    }
}
/*
  sum[a,4]+a[4]
  sum[a,3]+a[3]+a[4]
  sum[a,2]+a[2]+a[3]+a[4]
  sum[a,1]+a[1]+a[2]+a[3]+a[4]
  sum[a,0]+a[0]+a[1]+a[2]+a[3]+a[4]

  now as len==0 sum will return 0;
  then backtrack 0+1+2+3+4+5=15
*/

int main()
{
   int a[]={1,2,3,4,5};
   int n;
   n=sizeof(a)/sizeof(a[0]);
   cout<<sum(a,n);
   return 0;
}


