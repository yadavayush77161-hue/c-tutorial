//WAP a program to which calculate a function F where F = A(sq)+4BC+8,where a,b,and c is input
#include<iostream>
using namespace std;
int main()
{
    float A,B,C;
    float F;
    cout<<"Enter a = ";
    cin>>A;
    cout<<"Enter b = ";
    cin>>B;
    cout<<"Enter c = ";
    cin>>C;
    
    F = A*A + 4*B*C + 8;
    cout<<"Function  = "<<F<<endl;
    return 0;
}