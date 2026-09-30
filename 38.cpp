///wap to print a maxmim number in three numbers ?
#include<iostream>
using namespace std;
int maxNum(int a , int b ,int c){
    if(a>b && a>c){
        return a ;
    }
    else if(b>a && b>c){
        return b ;
    }
    else{
        return c;
    }
}
int main()
{
    int x,y,z;
    cout<<"Entre numbers = ";
    cin>>x>>y>>z;
    int res = maxNum(x,y,z);
    cout<<"maximum number = "<<res<<endl;
    return 0;   
}
