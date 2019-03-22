#include<iostream>
#include<fstream>  //for I/O from/to files
#include<string>
using namespace std;
int main()
{
    string line;
    string all[100]; //for appending all the lines from input file.
    int cnt=0;

    //ifstream for reading
    //ofstream for writing
    ifstream file("myfile.txt"); //a file named myfile->location
    if(file.is_open())
    {
        while(getline(file,line)) //if the file exists then every line of the file is taken
        {
            cout<<line<<endl;
            all[cnt++]=line; //storing them in the string array..just for learning.append can done here
        }
    }
    else
    {
        cout<<"Unable to open the file"<<endl;
    }

    file.close(); //must close a file when done



    string all_in_one="";
    for(int i=0;i<=cnt;i++)
    {
        all_in_one=all_in_one+all[i]; //taking all the lines in one single string variable
    }

    cout<<"all_output_before:"<<all_in_one<<endl;

    string str=all_in_one; //copying as string is going to be truncated in further operation
    string sub="boss";     //substring that we will search
    int str_len=str.length();
    int sub_len=sub.length();
    size_t found=0; //in this cases use size_t which is a unsigned integer
    int check=0,res=0; //check for first and second cases
    int loop=1; //loop used when replace
    string replace_word="Sondip poul singh"; //string that will replaced in place of substring
    int len_rword=replace_word.length();
    int inc=len_rword-sub_len; //length difference for replace word and substring
    //as example replace word=sondip and substring=boss then 6-4=2

    while(found<=str_len) //check until the length is finished
    {

         found=str.find(sub); //finding the substring
         if(found!=string::npos && check==0)
         {
             cout<<"The substring founded on the position:"<<found<<endl;//if founded return position
             all_in_one.replace(found,sub_len,replace_word);//replace the word
             check=1; //initial substring founded
             res=found+sub_len; //if we found it in position 3 initially and our substr length is
             //4 then next time we start from 3+4=7
             //so res is used for finding the next starting position
             str=str.substr(found+sub_len,str_len); //truncating the visited portion
             //now the new str is equal to the position 7 to end.
             //example: adam is adam ok adam
             //we find adam at 0 so, 0+4=4,we start from 4 next time and new string is
             // (space)is adam ok adam and the value start from 0 here as its a new string
         }

         //as the calculation is different from the initial found we use else if
         else if(found!=string::npos && check==1)
         {
              cout<<"The substring founded on the position:"<<found+res<<endl;
              //add the last position we started+the present position founded
              //example:
              //last position res=4 in case of adam and now we found adam in 4 (space,i,s,space,adam)
              //(0,1,2,3,4) the actual position is 4+4(last_position/res+new_founded position)
              all_in_one.replace(found+res+(inc*loop),sub_len,replace_word);
              //as the size may not same of the substring and replace word we change the
              //position every time
              //example: adam replaced by sondip
              //my name is adam.adam is good.
              //my name is sondip.sondip is good
              //as we are changing the main string when my name is adam becomes my name is sondip
              //then only the found+res will not work as we already inc=2(sondip-adam=2) step ahead.
              //every time we make change we are more 2 steps ahead.to track this i use loop
              //we are 2 steps ahead now.nest time if the substring exists and replace then we are 2*2
              //=4 steps ahead and goes on.
              //look if the replaced word is smaller than we get the negative results and thats work
              //fine also
              res=found+res+sub_len;//next position will be the substring length added value
              //4+4+4(previous_pos+now_pos+substring length)
              str=str.substr(found+sub_len,str_len);
              loop++; //increment loop every time a substring founded and replaced
         }

    }



   cout<<"all_output_later:"<<all_in_one<<endl;


   ofstream ff("myfile.txt");
   if(ff.is_open())
   {
       ff<<all_in_one; //sending the changed string to file again
   }
   ff.close();

//this block append lines at the end of the file
//    ofstream myf("myfile.txt",ios::app); //ios:app for appending
//    if(myf.is_open())
//    {
//      myf<<"Entering a line from program.\n";
//    }
//
//     myf.close();
    return 0;
}
