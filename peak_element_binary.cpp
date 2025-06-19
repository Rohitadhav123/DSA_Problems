#include<iostream>
using namespace std;

int peak_mountedelement(int array[],int size)
{
    int start=0;
    int end=size-1;
     int mid=start+(end-start)/2;
    while(start<end)
    {
            

        if(array[mid]<array[mid+1])
        {
            start=mid+1;
        }
        else 
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

int main()
{
    int size;
    cout<<"Enter the total element:";
    cin>>size;
    int array[size];
    cout<<"Enter the element in array :";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int answer=peak_mountedelement(array,size);
    cout<<"The peak element is that :"<<array[answer];
}

