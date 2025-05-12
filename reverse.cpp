#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start ++;
        end --;
        
    }
    
}

void printarray(int arr[],int n)
{
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i];
    }
    
}
int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,size);
    printarray(arr,size);

    return 0;
}