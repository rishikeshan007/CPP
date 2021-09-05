#include<iostream>
using namespace std;
void check(int num,int reverse)
{
    if(num==reverse)
    {
        cout<<"It is palindrome";
    }
    else{
        cout<<"It is not a palindrome";
    }
}
int main()
{
    int num;
    cout<<"enter the num"<<endl;
    cin>>num;
    int reverse=0;
    
    while(num!=0)
    {
        
        int rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
        
    }
    cout<<"the reversed value is:"<<reverse<<endl;
   
    check(num,reverse);
}    
