#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    int t1=0;
    int t2=1;
    int next=t1+t2;
    
    while(next<=n)
    {
        cout<<next<<",";
        t1=t2;
        t2=next;
        next=t1+t2;
    }
    
}
