//wap a program to print two number sum why using function
#include<iostream>
using namespace std;
int add(int a,int b)
{
   return a + b;
}
int main()
{
  int sum = add(3,4);
  cout<<"sum of ="<<sum;
  return 0;
}