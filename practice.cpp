#include<iostream>
#include<string>
using namespace std;
int main()
{
    while(1){
    string sentence;
    getline(cin,sentence);
    string substring;
    getline(cin,substring);

      if((sentence.find(substring))!=string::npos)
      //npos mane sobcheye high value jokhn string a substring khuje
      //pabena tokhn highest value ta return kore

      {
          cout<<"founded in pos:";
          cout<<sentence.find(substring)+1<<endl;
      }
      else cout<<"Opps not founded!"<<endl;
     }
    return 0;
}
