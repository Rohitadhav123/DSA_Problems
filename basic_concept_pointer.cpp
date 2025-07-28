#include<iostream>
using namespace std;

int main()
{
    int a=10;
    double b=4.5;
    double *ptr1=&b;
    cout<<"double is :"<<b<<endl;
    cout<<"double is ptr:"<<ptr1<<endl;
    cout<<"double is ptr:"<<*ptr1++<<endl;
    int *ptr=&a;
    cout<<"value of a :"<<a<<endl;
    cout<<"value of ptr :"<<ptr<<endl;
    (*ptr)++;
    cout<<"value of *ptr :"<<*ptr<<endl;
    int *q=ptr;
    cout<<ptr<<endl;
    cout<<" q :"<<*q<<endl;

    // important concept
    int i=3;
    int *t= &i;
    cout<< (*t)++ <<endl;
    
    *t=*t+1;
    cout<< "*t ="<< *t<<endl; 
    cout<< "*t ="<< t<<endl; 



}



// * refrence operator
// & show the address