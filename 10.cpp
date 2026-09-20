//Voting Eligibility
//User ki age input lo. Agar age 18 ya usse zyada hai to "Eligible" print karo, warna "Not Eligible".
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age = ";
    cin>>age;
    if(age>18)
    {
        cout<<"you are ELIGIBLE "<<endl;
    }
    else
    {
        cout<<"you are NOT ELIGIBLE "<<endl;
    }
    return 0;
}