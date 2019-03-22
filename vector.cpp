#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>numbers; //taking a dynamic integer array by vector
    for(int i=1;i<=5;i++)
    {
        numbers.push_back(i); //inserting the elements
    }
    int len=numbers.size();
    cout<<"Our initial Vector is:";
    for(int i=0;i<len;i++)
    {
        cout<<numbers[i]<<" ";
    }

    numbers.pop_back();//popping a element,it pops the latest element inserted
    int len_new=numbers.size();

    cout<<endl<<"After popping:";
    for(int i=0;i<len_new;i++)
    {
        cout<<numbers[i]<<" ";
    }

    numbers.insert(numbers.begin(),100);//vector er size 1 bare gelo
    numbers.insert(numbers.end(),200);
    numbers.insert(numbers.begin()+2,300); //3rd position a value insert korlam



    //vector<int>::iterator itpos=numbers.begin() + 2;
    // Insert element with value 9 at 4th Position in vector
     //vector<int>::iterator newIt = numbers.insert(itPos, 199);
     //inserting at any position
    //https://thispointer.com/c-how-to-insert-element-in-vector-at-specific-position-vectorinsert-examples/


     cout<<endl<<"After insertion:";
     vector<int>::iterator it;  //iterator in vector style
     for(it=numbers.begin();it!=numbers.end();it++)
    {
        cout<<*it<<" "; //printing the value in vector style
    }

    //erasing data at specific position
    numbers.erase(numbers.begin()+2);
    cout<<endl;
     for(it=numbers.begin();it!=numbers.end();it++)
    {
        cout<<*it<<" "; //printing the value in vector style
    }

    //vector_name.clear()will destroy the vector.




    return 0;
}
