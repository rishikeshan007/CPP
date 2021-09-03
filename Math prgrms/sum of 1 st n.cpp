#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"enter number"<<endl;
    cin>>number;
    
    if(number<0)
    {
        cout<<"enter positive number"<<endl;
    }
    else
    {
        int fact=1;
        for(int i=1;i<=number;i++)
        {
            fact=fact*i;
            
        }
        cout<<fact;
    }
  
