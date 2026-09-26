//wap program to print multiplacation of two value using function
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int mul(int a,int b);
    cout<<"Enter first num  = ";
    cin>>x;
    cout<<"Enter second num  = ";
    cin>>y;
    cout<<"the multification two num :"<<endl;
    int m  = mul(x,y); //calling function
    cout<< m <<endl;
}
int mul(int a ,int b )
{
  int temp = a * b;
  return  (temp);
}