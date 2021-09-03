#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    int start=max(a,b);
    int end=a*b;
    int ans;
    for(int i=start;i<=end;i++)
    {
        if(i%a==0 and i%b==0)
        {
            ans=i;
            break;
        }
        
    }
    cout<<"The LCM of 2 No's is :"<<ans;
    
}
