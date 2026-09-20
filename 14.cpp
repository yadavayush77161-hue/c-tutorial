//Temperature Check
//temperature input lo:
//30+ → Hot
//20–29 → Normal
//10–19 → Cold
//Below 10 → Very Cold
// "sita ram"
#include<iostream>
using namespace std;
int main()
{
    int temp ;
    cout<<"Enter tempreture = ";
    cin>>temp;
    if(temp>=30)
    {
        cout<<"tempreture is very HOT = "<<temp<<endl;
    }
    else if(temp>=20 && temp<=29)
    {
        cout<<"tempreture is NORMAL = "<<temp<<endl;
    }
    else if(temp>=10 && temp<=19)
    {
        cout<<"tempreture is COLD = "<<temp<<endl;
    }
    else{
        cout<<"tempreture is below VERY COLD = "<<temp<<endl;
    }
    return 0;
}

