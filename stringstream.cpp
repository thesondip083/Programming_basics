/*
A program that takes a string,from string it finds out the numbers,keep them in array,
finds the sum then. The array part is just for practice,we can sum in the loop directly.
*/
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int ara[100]={}; //actually put zero or NULL to all 100 place
    string sen("1234 is number, we will add 100 with it");
    stringstream ss;
    ss<<sen;
    string word;
    int num,i=0,j=0;


    while(!ss.eof())
    {
         ss>>word;
        //cout<<word<<endl;
        if(stringstream(word)>>num)
        {
            cout<<num<<" is a number"<<endl;
            ara[i++]=num;
        }
    }

    int sum=0;



    while(ara[j]!=0)
    {
        sum=sum+ara[j];
        j++;
    }
    cout<<"sum="<<sum;
    return 0;
}
