//Write a program to print additon , substraction and multiplication program
// thats program basically to use oprators ....
#include<iostream>
using namespace std ;
int main()
{
    double a,b;
    double sum ;
    cout<<"-----Welcome to addition program---- "<<endl;
    cout<<"Enetr first number = ";
    cin>>a;
    cout<<"Enter second number = ";
    cin>>b;
    sum = a + b ;
    cout<<"ADDITION = "<<sum<<endl;
    cout<<"----Welcome to substraction program---->"<<endl;
    cout<<"Enter first number = ";
    cin>>a;
    cout<<"Enter second number = ";
    cin>>b;
    sum = a-b;
    cout<<"SUBTRACTION = "<<sum<<endl;
    cout<<"----Welcome to Multification program---->"<<endl;
    cout<<"Enter first number = ";
    cin>>a;
    cout<<"Enter second number = ";
    cin>>b;
    sum = a*b;
    cout<<"MULTIFICATION = "<<sum<<endl;
    cout<<"----Welcome to division program---->"<<endl;
    cout<<"Enter first number = ";
    cin>>a;
    cout<<"Enter second number = ";
    cin>>b;
    sum = a/b;
    cout<<"DIVISION = "<<sum<<endl;
    return 0 ;
 


}