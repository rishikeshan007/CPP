#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the reverse of array is"<<endl;
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i];
    }
    
}
