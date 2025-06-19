#include<iostream>
using namespace std;

int first_occurence(int array[],int size,int target)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans= -1;
    while(start<=end)
    {
        if(array[mid]==target)
        {
            ans=mid;
            end=mid-1;
            
        }
        else if(array[mid]>target)
        {
            end=mid-1;
        }
        else if(array[mid]<target)
        {
            start=start+1;
        }
         mid=start+(end-start)/2;

        
    }
    return ans;
}

int last_occurence(int array[],int size,int target)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans= -1;
    while(start<=end)
    {
        if(array[mid]==target)
        {
            ans=mid;
            start=mid+1;
        }
        else if(array[mid]>target)
        {
            end=mid-1;
        }
        else if(array[mid]<target)
        {
            start=start+1;
        }
        
        mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int size;
    cout<<"Enter the total element in the array :";
    cin>>size;
    int array[size];
    cout<<"Enter the element in array:";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int target;
    cout<<"Enter the Target element :";
    cin>>target;

    int first=first_occurence(array,size,target);
    int last=last_occurence(array,size,target);
    int count=(last- first)+1;
    cout<<"The element of "<<target<<"count is that :"<<count;
}
