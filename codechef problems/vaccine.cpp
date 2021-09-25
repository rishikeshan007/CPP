#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
            if((a>=b)and(a<=c))
            {
                cout<<"Take second dose now"<<endl;
            }
            else if((a>b)and(a>c))
            {
                cout<<"Too Late"<<endl;
            }
            else
            {
                cout<<"Too Early"<<endl;
            }
           
        
    
    }
}
