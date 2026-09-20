//wap program to print 100 odd number using while loop
#include<iostream>
using namespace std;
int main()
{
    int x , odd ;
    x = 1;
    odd = 100;
    cout<<"100 odd numbers "<<endl;
    while(x<=odd)
    {
        cout<<"x = "<<x<<endl;
        x = x + 2 ;
    }
    return 0;
}