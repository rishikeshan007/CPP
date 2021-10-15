#include<iostream>
using namespace std;
int min(int a,int b)
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
void gcd(int a,int b)
{
    int ans=1;
    for(int i=1;i<=min(a,b);i++)
    {
        if((a%i==0)and(b%i==0))
        {
            ans=i;
            
        }
    }
    cout<<ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    gcd(a,b);
}
