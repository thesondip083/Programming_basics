//check if the character frequency of a string follow the recamans series or not
#include<iostream>
#include<map>
using namespace std;


int series(int ara[],int n)
{
    ara[0]=0;
    int temp,j,flag=0;
    for(int i=1;i<=n;i++)
    {
       temp=ara[i-1]-i;
       flag=0;
       for(j=0;j<i;j++)
       {
           if(ara[j]==temp || temp<0)
           {
               ara[i]=ara[i-1]+i;
               flag=1;
               break;
           }
       }
       if(flag==0) ara[i]=temp;
    }
}

string recaman(string str)
{
    map<char,int>m;
    map<char,int>::iterator it;
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        m[str[i]]++;
    }
   int map_size=m.size();
   int ara[map_size+1];
   series(ara,map_size);

//   for(it=m.begin();it!=m.end();it++)
//   {
//       cout<<it->first<<" "<<it->second<<endl;
//   }
//   for(int i=0;i<=map_size;i++)
//   {
//       cout<<ara[i]<<" ";
//   }

   int flag;
   for(it=m.begin();it!=m.end();it++)
   {
       int found=0;
       flag=0;
       for(int j=1;j<=map_size;j++) //cause a[0]=0 and we don't count this
       {
           if(ara[j]==(it->second))
           {
               found=1;
               break;
           }
       }
       if(found==0)
       {
           flag=1;
           break;
       }
   }

     if(flag==0) return "yes";
     else return "no";
}

int main()
{
    string str="pshpwpwpphwp";//s=1,h=2,w=3,p=6;
    cout<<recaman(str);
    return 0;
}

