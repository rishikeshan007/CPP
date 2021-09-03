#include<iostream>
using namespace std;
int main()
{
    int number1=0;
    int number2=1;
    int nextterm=0;
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"fibonocci series"<<endl;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<number1<<",";
            continue;
        }
        if(i==2)
        {
            cout<<number2<<",";
            continue;
        }
        int nextterm=number1+number2;
        number1=number2;
        number2=nextterm;
        cout<<nextterm<<",";
    }
    return 0;
}
