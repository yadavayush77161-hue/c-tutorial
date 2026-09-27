//Wap to calculate nCr binomial cofficient for n & r
#include<iostream>
using namespace std;
int factorial(int num)
{
    int fact = 1;
    for(int i = 1;i<=num;i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n,int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
    return fact_n/(fact_r * fact_nmr);
}
int main()
{
    int x,y;
    cout<<"Enter value = ";
    cin>>x>>y;
    int res = nCr(x,y);
    cout<<"bionomial cofficient = "<<res<<endl;
    return 0;
}