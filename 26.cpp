//Wap program  to use bubble sort algorithm and sorted array elements 
#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                 swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {4,1,5,2,3,10};
    int n = 6;
    bubblesort(arr,n);
    printArray(arr,n);
    return 0;
}