#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int d,f;
    cin>>d>>f;
    swap(d,f);
}
