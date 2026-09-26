//wap to print sum of 1 to N number using functions
#include<iostream>
using namespace std;
int sumNum(int num){
    int sum = 0;
    for(int i=1;i<=num;i++)
    {
        sum = sum + i;
    }
    return sum ;
}
int main()
{
    int n;
    cout<<"Enter num = ";
    cin>>n;
    int res = sumNum(n);
    cout<<"sum of = "<<res;
    return 0; 
}