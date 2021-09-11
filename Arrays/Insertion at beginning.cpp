#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int value,pos;
    cout<<"enter the element"<<endl;
    cin>>value;
    
    for(int i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=value;
    n++;
    cout<<"the resultant array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
