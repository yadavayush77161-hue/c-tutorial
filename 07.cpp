//Even or Odd
//User se ek number lo aur check karo ki number even hai ya odd.
#include<iostream>
using namespace std ;
int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;
    if(num%2==0)
    {   
        cout<<"number is EVEN = "<<num<<endl;
    }
    else
    {
        cout<<"number is ODD = "<<num<<endl;
    }
    return 0;
}