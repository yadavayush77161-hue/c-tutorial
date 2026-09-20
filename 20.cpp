//write a program to print sum and average of given values using for loops
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"How many numbers \n";
    cin>>n;
    float sum = 0;
    float a ;
    for(int i=0;i<n-1;i++)
    {
        cout<<"Enter number = ";
        cin>>a;
        sum = sum + a;
    }
    float av;
    av = sum / n;
    cout<<"sum of = "<<sum<<endl;
    cout<<"avarage ="<<av<<endl;
    return 0;

}