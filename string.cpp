#include<iostream>
using namespace std;
int main()
{
    string name;
    cin>>name;
    cout<<name<<" "<<name.length();
    name.push_back('P');
    cout<<endl<<name;
    return 0;
}
