// example 4,1,3,5,7,2
// afert inde x=3 reverse the array 
// outpur 4,1,3,5,2,7

#include<iostream>
using namespace std ;


void reverse_array(int array[],int size,int index)
{
    int start=index+1;
    int end=size-1;
    while(start<=end)
    {
       int temp=array[start];
       array[start]=array[end];
       array[end]=temp;
       start++;
       end--;

    }
}
void display(int array[],int size)
{
    cout<<"Reverse array";
    for(int i=0;i<size;i++)
    {
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
    int index;
    cout<<"Enter the index :"<<endl;
    cin>>index;
    reverse_array(array,size,index);
    display(array,size);
  
}