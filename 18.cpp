//write a program to print 100 natural number sum;
#include<iostream>
using namespace std;
int  main()
{
    int n;
    cout<<"Enter number = ";
    cin>>n;
    int sum = 0;
    int i = 1;
    while(i<=n)
    {
        sum = sum + i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}