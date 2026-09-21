//sum of first 15 even numbers and theirs sqaures sum
#include<iostream>
using namespace std;
int main()
{
    int sum = 0 ; 
    int sum_sqaure = 0;
    int i;
    for(i=2;i<=30;i=i+2)
    {
        sum = sum + i;
        sum_sqaure = sum_sqaure+ i * i;

    }
    cout<<"sum of even numbers =  "<<sum<<endl;
    cout<<"sum of sqares = "<<sum_sqaure<<endl;
    return 0;
}