//Wap a program to print division two number using function
#include<iostream>
using namespace std;
int mul(int a, int b)
{
    return a / b;
}
int main()
{
    int x,y;
    cout<<"Enter first num = ";
    cin>>x;
    cout<<"Enter second num = ";
    cin>>y;
    int m = mul(x,y);
    cout<<"Division = "<<m;
    return 0;

}
