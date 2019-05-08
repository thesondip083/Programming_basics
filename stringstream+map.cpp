#include<iostream>
#include<sstream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string sen("i am good i am good i am great");
    stringstream ss;
    ss<<sen;
    map<string,int>m;
    map<string,int>::iterator it;

    string word;
    while(!ss.eof())
    {
        ss>>word;
        m[word]++;
    }

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
