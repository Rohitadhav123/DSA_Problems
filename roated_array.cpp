#include<iostream>
using namespace std;

void rotated_array(int array[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        array[(i+key)%size]=array[i];
        cout<<array[i];

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
    int key;
    cout<<"Enter the number to replace the element :"<<endl;
   cin>>key;
    rotated_array(array,size,key);
}
