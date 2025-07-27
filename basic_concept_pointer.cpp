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
}



// * refrence operator
// & show the address