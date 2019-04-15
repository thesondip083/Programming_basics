/*
Maps are associative dynamic arrays,have a unique key and corresponding value
this is a program to know the basics functionalities used in map
*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string,int>info{{"sondip",1},{"susmoy",2},{"pritam",3}};
    map<string,int>info2;//an empty map
    map<string,int>::iterator it;
    info2=info; //copying the map

    //iterate in the map
    for(it=info.begin();it!=info.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl; //returns sondip 1 susmoy 2...
    }

    //returns the same result as they are copy to each other
    for(it=info2.begin();it!=info2.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl; //returns sondip 1 susmoy 2....
    }

    int len=info.size();//3
    cout<<"map length:"<<len<<endl; //determine the size
    cout<<"id of sondip:"<<info.at("sondip")<<endl;//prints 1 info attached with key sondip

    //adding a new element,the key must be different
    info.insert(pair<string,int>("ratul",100));
    //info["rajib"]=123; is possible
    cout<<"map new length:"<<info.size();//now its become 4

    //finding a element
    cout<<info.find("sondip")->second<<endl;//1 finding a element when the key is known
    //only info.find("sondip") will return error

    //erasing
    info.erase("pritam");
     for(it=info.begin();it!=info.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl; //returns  ratul 100 sondip 1 susmoy 2 removes pritam
    }

    //finding and erasing
    it=info.find("ratul"); //find() returns an iterator always
    if(it!=info.end())
    {
        info.erase(it);
    }

     for(it=info.begin();it!=info.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl; //returns sondip 1 susmoy 2 removes ratul
    }

    //other erasing methods
   // info.erase(info.begin());//removes the first element of map
   //info.erase(it,info.end());//it is iterator from the iterator position delete all upto end
   //info.clear();//removes all the elements make an empty map

   bool tf;
   tf=info.empty();
   cout<<tf<<endl;//returns 0 menas false,if 1 means empty

   /* AN EXAMPLE OF USING empty()
     while (!mymap.empty())
      {
      std::cout << mymap.begin()->first << " => " << mymap.begin()->second << '\n';
      mymap.erase(mymap.begin());
     }
   */

   //to check whether a element is in the map or not we use count().it returns 1 or 0 cause
   //keys are unique thus its impossible to have the same key twice
   int val=info.count("gargi");
   int val2=info.count("susmoy");
   cout<<val<<" "<<val2<<endl; //0 gargi is absent 1 cause susmoy is present


   //UPPER BOUND AND LOWER BOUND
  map<char,int> mymap;
  map<char,int>::iterator itlow,itup;

  mymap['a']=20;
  mymap['b']=40;
  mymap['c']=60;
  mymap['d']=80;
  mymap['e']=100;

  itlow=mymap.lower_bound ('b');  // itlow points to b
  itup=mymap.upper_bound ('d');   // itup points to e (not d!)

  mymap.erase(itlow,itup);        // erases [itlow,itup]

  // print content:
  for (std::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

//MAP SWAPPING
  //map1.swap(map2);

    return 0;
}

