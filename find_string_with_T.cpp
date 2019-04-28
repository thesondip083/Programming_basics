#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string>words;
    string s,sub;
    getline(cin,s);
    int len=s.length();
    for(int i=0;i<len;i++)
    {
       if( s[i]=='T' && s[i-1]==' ')
       {
           sub="";
           while(s[i]!=' ')
           {
               sub=sub+s[i];
               i++;
           }
           cout<<sub<<" ";
          // words.push_back(sub);
       }
    }
//    vector<string>::iterator it;
//    for(it=words.begin();it!=words.end();it++)
//    {
//        cout<<words[it]<<" ";
//    }


    return 0;
}
