// write a program all even number between 1 to 50;
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"how many numbers = ";
    cin>>num;
    for(int i=1;i<=num;i++){
    
        if(i%2==0)
        {
            cout<<"Even number is = "<<i<<endl;
        }
    }
    return 0;
}