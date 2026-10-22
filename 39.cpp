//Array
#include<iostream>
using namespace std;
int main()
{
   int arr[6]={20,30,55,90,40};
   int index = 3;
   int value = 60;
   for(int i = 5;i>index;i--)
   {
       arr[i] = arr[i-1];
   }
   arr[index]=value;
   for(int i=0;i<6;i++)
   {
      cout<<arr[i]<<endl;
   }
   
   return 0;
}