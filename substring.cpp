#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<string> names;
    names.push_back("sondip");
    names.push_back("poul");

    vector<string>::iterator it;
    it=find(names.begin(),names.end(),"sondip");
    if(it!=names.end())
        cout<<"The name Exists!"<<endl;
    else
        cout<<"not Founded"<<endl;

//    cout<<names.begin();

    return 0;
}

