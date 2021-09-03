#include<iostream>
using namespace std;
int table(int n,int end)
{
  
    for(int i=1;i<=end;i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
}
int main()
{
    int n,end;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter end"<<endl;
    cin>>end;
    table(n,end);
}
