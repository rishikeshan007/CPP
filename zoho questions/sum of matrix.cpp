#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int sum=0;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    cout<<"the sum is"<<sum;
}
