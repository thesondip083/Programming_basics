/*
Author:Sondip p singh
A program to find the frequency of words from a string

map is best for solving those type of frequency.
The idea is simple:
                  1.take every word
                  2.store in map,if found again increment the value

To take every word as token i am using a while loop until a space is founded.Until then add
every char to get the word.When a space is founded push back it to the map and increment the value by
1.But in the last word don't have the space at the end.So i put a check there if it reaches the length
just break the loop and store the word in the map(check also if exists and increment if founded).
[N:B Remember the check is up to length not (length-1) cause the value of i is incremented before]


*/
#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    string str="thanos is the boss and the boss is thanos";
    int len=str.length();
    map<string,int>wf;
    string temp;
    //int rem=0;
    for(int i=0;i<len;i++)
    {
        temp="";
        while(str[i]!=' ')
        {
            temp=temp+str[i];
            i++;
            if(i==len) break;
        }
        wf[temp]++;

    }
    map<string,int>::iterator it;
    for(it=wf.begin();it!=wf.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
