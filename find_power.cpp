#include<iostream>
using namespace std;


int power(int a,int b)
{
    int result=1;
    for(int i=0;i<b;i++)
    {
        result=result*a;
       
    }
    return result;
}

int main()
{
    int a,b;
    cout<<"Enter the a and b";
    cin>>a>>b;
    int ans=power(a,b);
    cout<<"the power of"<<a<<"is that :"<<ans;
}