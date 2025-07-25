#include<iostream>
using namespace std;

bool prime(int num)
{
  
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout<<"Enter number for checking is prime or not :";
    cin>>num;


    cout<<"The "<<num<<" Less than prime number are :";

    for(int i=2;i<num;i++)
    {
        if(prime(i))
        {
            cout<<i<<" ";
        }
    }
}

// time complexity :- o(n*log(log n))