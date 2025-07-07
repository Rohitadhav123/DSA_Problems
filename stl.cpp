#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5>a={1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Array is empty :"<<a.empty()<<endl;
    cout<<"First element in array :"<<a.front()<<endl;
    cout<<"Last element in array :"<<a.back()<<endl;
}