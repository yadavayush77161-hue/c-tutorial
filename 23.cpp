//write a program to print sum of 20 numbers and average ;
#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    float av;
    int i;
    for(i=2;i<=40;i = i +2)
    {
        sum = sum + i;
    }
    av = sum / 20;
    cout<<"sum of 20 numbers = "<<sum<<endl;
    cout<<"average of = "<<av<<endl;
    return 0;
}