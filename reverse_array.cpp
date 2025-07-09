#include<iostream>
using namespace std;

void reverse_array(int array[],int size)
{
    cout<<"Reverse array :"<<endl;
    for(int i=size-1;i>=0;i--)
    {
        cout<<array[i]<<endl;

    }
}


int main()
{
    int size;
    cout<<"Enter the size of array :"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter the element in the array :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    reverse_array(array,size);
}