//A program to read any two numbers from the keyboard and to display the largest value of them
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two number ";
    cin>>x>>y;
    if(x > y)
    {
        cout<<"largest number x = "<<x<<endl;
    }
    else{
        cout<<"largest number is y = "<<y<<endl;
    }
    return 0;
}