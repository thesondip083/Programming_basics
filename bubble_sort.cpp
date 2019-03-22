#include<bits/stdc++.h>
using namespace std;
//stability in sorting algorithm defines that if we have the same value as example 3,6(first),9,6(second)
//we do 3,6(first),6(second),9 the first comer stays stable at the first place.
//selection+bubble+insertion+merge+quick sort+heap sort
int main()
{
    //bubble sort
    //time complexity(Best->Ω(n) and worst_case=O(n^2))
    //https://www.youtube.com/watch?v=Jdtq5uKz-w4
    int a[]={1,4,3,5,2,0,9,7}; //shortcut sort(a,a+n) where n is the size of the array
    size_t n = sizeof(a)/sizeof(a[0]); //size_t is just a unsigned integer prints 5 awesome!
    int temp;
    for(int i=0;i<n-1;i++) //explanation is in the video
    {
        for(int x=0;x<n-i-1;x++)
        {
            if(a[x]>a[x+1])
                {
                     temp=a[x];
                     a[x]=a[x+1];
                     a[x+1]=temp;
                }
        }
    }

    for(int i=0;i<n;i++) //for printing
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

