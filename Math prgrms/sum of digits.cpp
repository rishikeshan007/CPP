#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter the number"<<endl;
    cin>>number;
    int count=0;
    while(number>0)
    {
        number=number/10;
        count++;
    }
    cout<<"The sum of digits is:"<<count;
  
}
