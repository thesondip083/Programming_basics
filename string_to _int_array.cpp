#include<bits/stdc++.h>
#include <sstream>
#include<string>
using namespace std;
//converting a string array as integer array

    //char c='6';
    //cout<<int(c)-48<<endl;//gives 6 works fine for single character

   // char x='140';
    //cout<<int(x)-48; //returns 0 only


int main()
{
    string s = "12345";

    // object from the class stringstream
    stringstream geek(s);

    // The object has the value 12345 and stream
    // it to the integer x
    int x = 0;
    geek >> x;

    // Now the variable x holds the value 12345
    cout << "Value of x : " << x;

    return 0;
}
