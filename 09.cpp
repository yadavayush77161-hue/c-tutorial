//Greater Number
//User se do numbers a aur b lo aur check karo ki kaunsa number greater hai.
#include<iostream>
using namespace std;
int main()
{
    float num1 ,num2;
    cout<<"Enter first number = ";
    cin>>num1;
    cout<<"Enter secind number = ";
    cin>>num2;
    if(num1>num2 )
    {
        cout<<"Greater number  =  "<<num1<<endl;
    }
    else if(num1<num2)
    {
        cout<<"Greater number = "<<num2<<endl;
    }
    else
    {
        cout<<"both number are is same "<<endl;
    }
    return 0;
}