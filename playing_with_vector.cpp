#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector is a type of dynamic array
int main()
{
    vector<int>numbers; //
    for(int i=1;i<=5;i++)
    {
        numbers.push_back(i);
    }
    int len=numbers.size();
    for(int j=0;j<len;j++)
    {
        cout<<numbers[j]<<" ";
    }

    return 0;
}

