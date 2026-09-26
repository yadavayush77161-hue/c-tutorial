//WAP a program to print square of given number why using function
#include<iostream>
using namespace std;
int sqaure(int num)
{
    int temp = num * num;
    return(temp);
    
}
int main()
{
    int sq;
    int square(int num);
    cout<<"Enter number = ";
    cin>>sq;
    int result = sqaure(sq);
    cout<<"square = "<<result<<endl;
    return 0;
}