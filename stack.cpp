#include<iostream>
#include<stack>
using namespace std;
//stack is a data structure which works in a manner of LIFO
//can be implemented by array or stack
//but we have STL too.
int main()
{
  stack<int>numbers;
//  stack<int>::iterator i;
  numbers.push(10);
  numbers.push(15);
  while(!numbers.empty())
  {
      cout<<numbers.top()<<" ";
      numbers.pop();
  }
  //check for more https://www.geeksforgeeks.org/stack-in-cpp-stl/
  return 0;
}


