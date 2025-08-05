#include<iostream>
using namespace std;

int main()
{
    int i=5;
    int *ptr=&i;
    int **ptr1=&ptr;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ptr1<<endl;
    cout<<**ptr1<<endl;
    cout<<*ptr1<<endl;


}