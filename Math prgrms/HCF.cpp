#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter num1"<<endl;
    cin>>num1;
    cout<<"enter num2"<<endl;
    cin>>num2;
    while(num1!=num2)
    {
        if(num1>num2)
        {
            num1=num1-num2;
        }
        else
        {
            num2=num2-num1;
        }
        
    }
    cout<<"the HCF is"<<num2;
}
