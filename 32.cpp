//Wap a program to print minimum of three numbers with using function 
#include<iostream>
using namespace std;
int minTwo(int a ,int b,int c){
    if(a<b && a<c ){
        return a ;
    }
    else if(b<a && b<c) {
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int x,y,z;
    cout<<"Enter numbers = ";
    cin>>x>>y>>z;
    int min=minTwo(x,y,z);
    cout<<"minimum of = "<<min<<endl;
    return 0;
}