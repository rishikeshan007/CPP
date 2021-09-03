#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int number;
    cout<<"enter the number"<<endl;
    cin>>number;
    while(number!=0)
    {
        int rem=number%10;
        sum=sum+rem;
        number=number/10;
    }
    cout<<"The sum of the number is:"<<sum;
}
