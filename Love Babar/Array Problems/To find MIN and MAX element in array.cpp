#include<iostream>
using namespace std;
int max(int arr[],int n)

{
    int MAX=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>MAX) //10>0 it will check like this
        {
            MAX=arr[i];
        }
    }
    return MAX;
    
    
}
int min(int arr[],int n)
{
    int MIN=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<MIN) //It will compare 10 and 20.
        {
            MIN=arr[i];
        }
    }
    return MIN;
    
    
}
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum element in array is:"<<max(arr,n)<<endl;
    cout<<"Minimum element in array is:"<<min(arr,n)<<endl;
    

    
}
