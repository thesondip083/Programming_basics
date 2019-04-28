/*
0-1 knapsack problem
*/

#include<iostream>
using namespace std;

//returns the max value
int maxx(int a,int b)
    {
        if(a>=b) return a;
        else return b;
    }

int main()
{
    int n;
    cout<<"enter item number:";
    cin>>n;
    int wt[n],price[n];
    int max_wt;
    cout<<"enter the max weight:";
    cin>>max_wt;
    cout<<"enter item weights:";
    for(int i=1;i<=n;i++) //starts from 1 for easier calculation
    {
        cin>>wt[i];
    }
    cout<<"enter items price:";
    for(int i=1;i<=n;i)//same as previous
    {
        cin>>price[i];
    }
    int v[n+1][max_wt+1]; //a extra row and column needed cause the first row and columns is zero
    //cause when the item weight is 0 there is no item and when zero profit means no item also
    //here row are items and columns hold the weight till the max

    //filling the first row and column zero value
    for(int i=0;i<=n;i++)
    {
        v[i][0]=0;
    }
    for(int i=0;i<=max_wt;i++)
    {
        v[0][i]=0;
    }

   //taking each item
    for(int i=1;i<=n;i++){
        for(int w=1;w<=max_wt;w++)
        {
            //if the weight of an item is greater than the current weight we cant take this
            //cause we cant take an item of weight 4 when the current weight is 3
            if(wt[i]>w)
            {
                v[i][w]=v[i-1][w];//as we cant take the item we fill it with the previous value
            }
            else
            {
                v[i][w]=maxx(v[i-1][w],price[i]+v[i-1][w-wt[i]]);
                //now we have two choices:
                //take the new item with the max profit or
                //take the previous item if the previous item gives max profit

                //simplification
                //we put the profits/values in the matrix
                //current profit=maximum(the previous item profit,current item profit plus the extra
                //profit by taking previous items)
                //https://www.dyclassroom.com/dynamic-programming/0-1-knapsack-problem
            }
        }
    }

    //printing the matrix to see the actual calculation
    for(int i=0;i<=n;i++){
        for(int w=0;w<=max_wt;w++)
        {
           cout<<v[i][w]<<"         ";
        }
        cout<<endl;
    }
    cout<<"maximum profit:"<<v[n][max_wt]; //the last position of matrix will be the result

    return 0;
}
