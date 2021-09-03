#include<iostream>
using namespace std;
int reverse(int n)
{
    int rem,reverse=0;
    while(n!=0)
    {
        rem=n%10;//1st we need to find remainder here rem=5
        reverse=reverse*10+rem;//0*10+5 so reverse=5 stored
        n=n/10;//then n=1234. Then continue the process.
    }
    return reverse;
    
}
int main()
{
    int n;
    cout<<"enter the value"<<endl;
    cin>>n;
    cout<<reverse(n);
}
