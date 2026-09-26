//Wap to calculate N factorial
#include<iostream>
using namespace std;
int factNum(int num){
    int fact = 1;
    for(int i=1;i<=num;i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n ;
    cout<<"Enter num = ";
    cin>>n;
    int res = factNum(n);
    cout<<"Factorial of = "<<res;
    return 0;
}