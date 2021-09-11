#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int search;
    cout<<"enter the element to search"<<endl;
    cin>>search;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            cout<<"element found at position:"<<i;
        }
    }
    return -1;
}
