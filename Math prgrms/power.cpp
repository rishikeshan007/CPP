#include<iostream>
#include<cmath>
using namespace std;
int power(int base,int exponent)
{
    int result;
    result=pow(base,exponent);
   
}
int main()
{
    int base,exponent;
    cout<<"enter base"<<endl;
    cin>>base;
    cout<<"enter exponent"<<endl;
    cin>>exponent;
    cout<<power(base,exponent);
}
