#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"enter row"<<endl;
    cin>>r;
   
    for(int i=r;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

//the output be when r=5
//*****
//****
//***
//**
//*
