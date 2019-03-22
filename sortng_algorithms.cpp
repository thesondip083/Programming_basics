#include<bits/stdc++.h>
using namespace std;
//stability in sorting algorithm defines that if we have the same value as example 3,6(first),9,6(second)
//we do 3,6(first),6(second),9 the first comer stays stable at the first place.
//selection+bubble+insertion+merge+quick sort+heap sort
int main()
{
    //insertion sort
    //https://www.youtube.com/watch?v=i-SKeOcBwko
    int a[]={1,4,3,5,2,0,9,7}; //shortcut sort(a,a+n) where n is the size of the array
    size_t n = sizeof(a)/sizeof(a[0]); //size_t is just a unsigned integer prints 5 awesome!
    int hole,value;
    for(int i=1;i<n;i++)
    {
        value=a[i];
        hole=i;
        while(hole>0 && a[hole-1]>value)
        {
            a[hole]=a[hole-1];
            hole=hole-1;

        }
        a[hole]=value;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
