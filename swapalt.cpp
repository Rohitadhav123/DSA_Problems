#include<iostream>
using namespace std;

int swape(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1 <n)
        {
           int temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
        }
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size];
    cout<<"Enter the array in number :";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
swape(arr,size);
printarray(arr,size);


return 0;
}