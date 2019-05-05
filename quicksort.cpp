/*
A quicksort implementation
learn if from mycodeschool youtube channel.

Most programming language use quicksort as there build in sorting methods.

Time-complexity:
Quick sort is one of the finest sorting algorithm with O(nlogn) in average time complexity
In the worst case it is O(n^2) which is rare and by using randomized quick sort it will become
same as average case.O(n) is the best time complexity.

Space complexity:
in place sorting algorithm means takes constant amount of extra memory.Thats why it is better than
merge sort,Where extra memory is not in place.

the main idea is:
1.take the array and mark the last element as pivot.(other node can be used as pivot but we dont do)
2.take all the value less than the pivot value in the left side and greater values in the right side
3.now we get two sub array
4.do the same with the two sub array unless there is only one element left.



In code:
->from main send the array and its size,start=0;end=len-1;
->the quick sort function takes it and
                     ->find the index of the pivot after partitioning(initial pivot was at end)
                     ->recursively call itself on the sub array after partitioning
->In partitioning we do
                    ->take every element except the pivot
                    ->track the pindex (initializing at start)
                    ->when the ara element is less than the pivot swap them
                    ->(pindex change every time when a element is founded less than the pivot)
                    ->finally swap the pivot with the pindex positioned element

                    assume 7,3,4,6
                    let pivot=6;
                    so pindex=0(value 7);
                    7<6 no,do nothing
                    3<6 yes,swap a[i]=3 with a[pindex]=7,so ara become 3,7,4,6
                    and also pindex becomes pindex+1=0+1=1 now;
                    4<6 yes so swap 3,4,7,6 pindex=1+1=2;
                    no elements left except pivot,so swap a[end] with a[pindex]=a[2]
                    so we get 3,4,6,7
                    (this is a simple general approach)
                    if the array is 7,3,4,8,11,6 then we will get
                        (3,4),6,(7,8,11)

*/

#include<iostream>
using namespace std;

int partitioning(int ara[],int start,int endd)
{
    int pivot=ara[endd];
    int pindex=start;
    int temp;
    for(int i=start;i<endd;i++)
    {
        if(ara[i]<=pivot)
        {
            temp=ara[i];
            ara[i]=ara[pindex];
            ara[pindex]=temp;
            pindex=pindex+1;
        }
    }
    int temp2;
    temp2=ara[pindex];
    ara[pindex]=ara[endd];
    ara[endd]=temp2;

    return pindex;
}

void quicksort(int ara[],int start,int endd)
{
    int pindex;
    if(start<endd){
        pindex=partitioning(ara,start,endd);
        quicksort(ara,start,pindex-1);
        quicksort(ara,pindex+1,endd);
    }
}

int main()
{
    int num[]={2,3,5,4,1,18,5,12,0};
    int len=sizeof(num)/sizeof(num[0]);
    int start=0,endd=len-1;
    quicksort(num,start,endd);
    for(int i=0;i<len;i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}
