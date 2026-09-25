//Write a function maximum() that takes three integers and returns the largest number.
#include<iostream>
using namespace std;
int maximum(int a ,int b, int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{ 
    int a,b,c;
    cout<<"Enter first number = ";
    cin>>a;
    cout<<"Enter second number = ";
    cin>>b;
    cout<<"Enter third number = ";
    cin>>c;
    int max = maximum(a,b,c);
    cout<<"maximum of = "<<max;
    return 0;
}