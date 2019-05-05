/*
map is first key lookup data structure and the key cant be duplicated,value associate with the keys can be the same or different.
by using this criteria "every character of a string apperas in map only once" we can find the frequency of them by increasing the value
every time same character appears.
*/


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
