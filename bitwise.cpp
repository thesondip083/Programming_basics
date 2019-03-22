#include<iostream>
using namespace std;
int main()
{
   unsigned int a = 60;	  // 60 = 0011 1100
   unsigned int b = 13;	  // 13 = 0000 1101
   int c = 0;

   c = a & b;             // 12 = 0000 1100
   //must assign the value to another variable otherwise it gives error
   cout << "Line 1 - Value of c is : " << c << endl ;


   //bitwise shift
   c=c<<2;  //left shift 2 place 48=00110000
   //must assign the value to another variable otherwise it gives error
   cout << "Line 2 - Value of c is(left shift) : " << c << endl ;

   c=c>>2;
   cout << "Line 3 - Value of c is(right shift) : " << c << endl ; //right shift 2 places gives back 12 again 00001100

  return 0;
}

