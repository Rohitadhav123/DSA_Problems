#include<iostream>
using namespace std;

int firstorder(int array[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans=0;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(array[mid]==key)
        {
            ans=mid;
            start =mid+1;
            return ans;
        }
        else if(array[mid]>key)
        {
            end=mid-1;
        }
        else if(array[mid]<key)
        {
            start=mid+1;
        }
    }
    return -1;
    
    
}


int main()
{
    int size;
    cout<<"Enter Total number of array:";
    cin>>size;
    int array[size];
    cout<<"Enter the element in the array:";
    for(int i=0;i<size;i++)
    {
    
        cin>>array[i];
    }
    int key;
    cout<<"Enter the search key:";
    cin>>key;
    
    int answer=firstorder(array,size,key);
    cout<<"The starting index is:"<<answer;
}
