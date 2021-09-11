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
   
    arr[n]=value;
    n++;
    cout<<"the resultant array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
