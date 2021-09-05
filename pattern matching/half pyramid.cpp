#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"enter row"<<endl;
    cin>>r;
   
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

//the output be when r=5
//*
//**
//***
//****
//*****
