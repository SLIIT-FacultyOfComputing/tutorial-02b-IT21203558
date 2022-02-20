/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>
using namespace std;
int main ()
{
int no,fac;
  cout<<"Enter a Number:";
  cin>>no;
  fac=1;
  for(int i=no;i>=1;i--)
    {
      fac=fac*i;
    }
  cout<<"Factorial of "<<no<<" is "<<fac;
  return 0;
}
