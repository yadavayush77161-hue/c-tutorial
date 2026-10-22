//Write a program to print array insertion 
#include<iostream>
using namespace std;
int main()
{
    int arr[50],size,num;
    int pos,i;
    cout<<"Enter size of array = ";
    cin>>size;
    cout<<"Enter array elements = "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to insert :"<<endl;
    cin>>num;
    cout<<"Enter the index At which you want to insert : "<<endl;
    cin>>pos;
    if(pos<size)
    {
        for(i=size;i>pos;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos]=num;
    }
    else{
        arr[pos]=num;
    }
    cout<<"Element insert succesfully....!!\n";
    cout<<"new element iserted is = ";
    for(i=0;i<size+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}