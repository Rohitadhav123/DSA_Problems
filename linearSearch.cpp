#include<iostream>
using namespace std;

bool Search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[101];
    int size;
    cout<<"Enter the array size:";
    cin>>size;
    int key;
   
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the which number found :";
    cin>>key;

    int found=Search(arr,size,key);
    if(found)
    {
        cout<<"The number is found";
    }
    else{
        cout<<"Number is not found";
    }
   
}










