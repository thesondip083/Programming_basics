//http://www.cplusplus.com/doc/tutorial/ntcs/
//must visit this fantastic site

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char note[]="Welcome Bangladesh"; //direct assigning known as string literal
    //char node[] ; gives error without initial value cause we have to define the size
    char str[100];
    //cin>>str; //"my name is khan" only takes "my" taking full line is not possible
    //cout<<str<<endl;
    string name;
    getline(cin,name);
    //to get a full line in string getline(cin,str);
    cin.get(str,100);
    cout<<"char array output:"<<str<<endl;
    cout<<"string output:"<<name<<endl;

    cout<<"length of the char array is:"<<strlen(str)<<endl;
    cout<<"length of the string is:"<<name.size()<<endl;
    //0=48
    //char-48 turns it to a integer value

    return 0;
}
