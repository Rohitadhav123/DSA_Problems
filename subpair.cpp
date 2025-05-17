#include<iostream>
using namespace std;

void sub(int array[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(key==array[i]-array[j])
            {
                cout<<array[i]<<"-"<<array[j]<<"="<<key<<endl;
            }
        }
    }
}

int main()
{
    int size;
    cout<<"Enter the sizeof the array";
    cin>>size;
    int array[size];
    cout<<"Element in the array :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int key;
    cout<<"Entre the target value :";
    cin>>key;
    sub(array,size,key);
}