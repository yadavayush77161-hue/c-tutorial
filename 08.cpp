//Pass or Fail
//User se marks lo. Agar marks 33 ya usse zyada hain to Pass, warna Fail print karo
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks = ";
    cin>>marks;
    if(marks>=33)
    {
        cout<<"student is PASS =  "<<marks<<endl;
    }
    else
    {
        cout<<"student is FAIL = "<<marks<<endl;
    }
    return 0 ;
}