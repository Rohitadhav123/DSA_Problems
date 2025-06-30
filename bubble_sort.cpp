#include<iostream>
using namespace std;

int bubble_sort(int array[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

void dispaly_array(int array[],int size)
{
    cout<<"Sorted array :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i];

    }
}


int main()
{
    int size;
    cout<<"Enter the total number of array :"<<endl;
    cin>>size;
    
    int array[size];
    cout<<"Enter the array in the element :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    bubble_sort(array,size);
   dispaly_array(array,size);
    
}