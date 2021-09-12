#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the sorted array is:"<<endl;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"enter the Kth min element:"<<endl;
    cin>>k;
    cout<<"the kth min elemnent is:"<<endl;
    cout<<arr[k-1]<<endl; //3rd smallest element in the given array is 7.

    
   
}
