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
    cout<<"where we can insert"<<endl;
    cin>>pos;
    for(int i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
    n++;
    cout<<"the resultant array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
