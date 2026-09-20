//wap to print voting eligiblity of person
#include<iostream>
using namespace std;
int main()
{
  int age;
  cout<<"Enter your age =";
  cin>>age;
  if(age>=18)
  {
    cout<<"yor are eliglible "<<endl;
    cout<<" because your age is = "<<age<<endl;
  } 
  else
  {
    cout<<"you are not eligible "<<endl;
    cout<<"bacause your age is = "<<age<<endl;
  }
  return 0;
}