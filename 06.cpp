//Positive or Negative
//User se ek number lo aur check karo ki number positive hai ya negative.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout <<"Enter the number = ";
    cin>>num;
    if(num>=0)
    {
        cout<<"POSITIVE = "<<num;
    }
    else
    {
        cout<<"NEGITIVE = "<<num;
    }
    return 0;
}
