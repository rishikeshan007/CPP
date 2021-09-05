#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    bool isprime=true;
    
    //0 and 1 are not prime numbers
    if(num==0||num==1)
    {
        isprime=false;
    }
    else
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
               isprime=false; 
               break;
            }
        }
    }
    if(isprime)
    {
        cout<<"it is a prime number"<<endl;
    }
    else
    {
        cout<<"It is not a prime number"<<endl;
    }

}
