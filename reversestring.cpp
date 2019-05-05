#include<iostream>
#include<string>
using namespace std;
int main()
{
    //bacchader niyom
    string name="pidnos";
    string rev="";
    int j=0;
    for(int i=name.length()-1;i>=0;i--)
    {
       rev=rev+name[i];
    }
    cout<<rev<<endl;


    //boroder niyom akta string diyei kaj ses

    string nam="pidnos";
    int len=nam.size();//both size() and length() work
    int temp;
    for(int i=0;i<len/2;i++)
    {
        //swap(nam[i],nam[len-i-1]);
        temp=nam[i];
        nam[i]=nam[len-i-1];
        nam[len-i-1]=temp;

    }
    cout<<nam;
    return 0;
}
