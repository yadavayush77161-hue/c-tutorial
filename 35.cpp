//WAp to calcualte the sum of digit of a number 
#include<iostream>
using namespace std;
int sumOFdigit(int num)
{
    int digisum = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        num = num /10;
        digisum = digisum + lastdigit;
    }
    return digisum; 
}
int main()
{
    int x ;
    cout<<"Enter number  = ";
    cin>>x;
    int sum = sumOFdigit(x);
    cout<<"sum of = "<<sum<<endl;
    return 0;
}