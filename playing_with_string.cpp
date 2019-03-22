#include<iostream>
#include<string>
using namespace std;
int main()
{
    string sen;
    getline(cin,sen); //taking a sentence as input
    cout<<sen<<endl;
    cout<<sen.length()<<endl; //length of the input sentence(spaces counted) sen.size() is same
    cout<<sen.substr(5,8)<<endl; //a substring taken from position 5 and then 8 step ahead



    //this block of codes gives the first position of the substring founded
    string sub="adam";
    size_t found=0;
    int check=0;
    int res=0;

    while(found<=sen.length())
    {
         found=sen.find(sub);//size_t is just an unsigned integer

         if (found!=string::npos && check==0)
           {
              cout << "adam start at: " << found << '\n';
              check=1;
              sen=sen.substr(found+sub.length(),sen.length());
              res=found+sub.length();

           }
         else if (found!=string::npos && check==1)
          {
             cout << "adam start at: " << found+res << '\n';
             sen=sen.substr(found+sub.length(),sen.length());
             res=found+res+sub.length();
          }
    }



    //when we give the substring as input directly then it returns the last position
    //size_t found2=sen.find('adam');
    //if (found2!=string::npos)
    //cout << "adam ends at: " << found2 << '\n';


    //making uppercase and lowercase

    string sent="Sondip is the boss mamba!";
    for(int i=0;i<sent.size();i++)
    {
        if(sent[i]>=97 && sent[i]<=123)
        {
            sent[i]=sent[i]-32;
        }
    }
    cout<<sent<<endl;


    //replacing a substring
    string talk="hlw there i am the hlw VP";
    string subs="hlw";
    size_t founded= talk.find(subs);
    if(founded!=string::npos)
       {
          //str.replace(str.find(str2),str2.length(),"preposition");
          talk.replace(founded,subs.length(),"Hello sondip");
       }

    cout<<talk<<endl;

    return 0;
}
