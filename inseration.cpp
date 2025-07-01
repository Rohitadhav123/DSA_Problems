#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the total element of array :"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter the element in the array :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
}