#include<iostream>
using namespace std;

int firstorder(int array[],int size,int key)
{

    int start=0, end=size-1;
   
    int ans=0;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(array[mid]==key)
        {
            ans=mid;
            end =mid-1;
            
        }
        else if(array[mid]>key)
        {
            end=mid-1;
        }
        else if(array[mid]<key)
        {
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return ans;
    
    
}


int lastorder(int array[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans= -1;
    

    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end)
    {
        if(array[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }

        else if(array[mid]>key)
        {
            end=mid-1;
        }
        else if(array[mid]<key)
        {
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return ans;
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
    
    int firstorder_ans=firstorder(array,size,key);
    cout<<"The starting index is:"<<firstorder_ans<<endl;
    
    int secondorder_ans=lastorder(array,size,key);
    cout<<"The last index is :"<<secondorder_ans;
}

    }
}

int main()
{

    int size;
    cout<<"Enter the element size of array";
    cin>>size;
    int array[size];
    cout<<"Enter the size of element ";
    for(int i=0;i<size;i++)
    {
        cin>>array[size];
    }
    int key;
    cout<<"Enter the key for seraching :";
    cin>>key;

}

