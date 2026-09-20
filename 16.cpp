//write a program find largest number in values ?
#include<iostream>
using namespace std;
int main()
{
    int x , y ,z ;
    cout<<"Enter values = ";
    cin>>x>>y>>z;
    if(x>y && x>z)
    { 
        cout<<"largest number is x = "<<x<<endl;
    }
    else if(y>x && y>z)
    {
        cout<<"largest numbe is y = "<<y<<endl;
    }
    else{
        cout<<"largest number is z = "<<z<<endl;
    }
    return 0;
}