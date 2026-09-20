
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter student marks = ";
    cin>>marks;
    if(marks>=33)
    {
        if(marks>=90 && marks<=99)
        {
        cout<<"you are pass and per.. = "<<marks<<endl;
        cout<<"great = A+"<<endl;
        }
        else if(marks>=75 && marks<=89)
        {
            cout<<"you are pass and per.. = "<<marks<<endl;
            cout<<"great = A"<<endl;
        }
        else if(marks>= 60 && marks<=74)
        {
            cout<<"you are pass and per... = "<<marks<<endl;
            cout<<"great = B"<<endl;
        }
        else if(marks>=40 && marks<=59)
        {
            cout<<"you are pass and per.. = "<<marks<<endl;
            cout<<"great = C"<<endl;
        }
        
    }
    else
    {
        cout<<"you are fail 😒 = "<<marks<<endl;
    }
        return 0;
}
