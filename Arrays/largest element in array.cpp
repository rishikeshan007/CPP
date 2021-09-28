#include<iostream>
using namespace std;

void max(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            arr[i]=max;
        }
        else
        {
            continue;
        }
    }
    
    cout<<max;
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    max(arr,n);
    
   
}
