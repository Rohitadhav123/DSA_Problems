#include<iostream>
using namespace std;

int binarySearch(int array[],int size,int key)
{
    int start=0;
    int end=size-1;
    int  mid=start+(end-start)/2;
    
    while(start<=end)
    {
        if(array[mid]==key)
        {
           return mid;
        }

        if(array[mid]<key)
        {
            start=mid+1;
        }

        if(array[mid]>key)
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    int array[size];
    cout<<"Enter the element in the array :";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int key;
    cout<<"Enter the searching element :";
    cin>>key;

    int index=binarySearch(array,size,key);
    cout<<"Element of "<<key<<"index is :"<<index-1<<endl;
}



/*
Important notes 
 1] in this integer(int ) size is 2^32-1 but 
 when we use mid formula (start+end) then it oversize hence
 we use this formula mid=start+(end-start)/2

 2] complexity log(n)

*/