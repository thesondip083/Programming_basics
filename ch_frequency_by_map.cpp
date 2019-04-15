#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,int>m;
    string name="sondippoulsingh";
    int len=name.length();
    for(int i=0;i<len;i++)
    {
        m[name[i]]++;
    }
    map<char,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
