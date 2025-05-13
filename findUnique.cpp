#include<iostream>
using namespace std;

int unique(int array[],int n)
{
    int ans =0;
    for(int i=0;i<n;i++)
    {
        ans=ans^array[i];
    }
    return ans;
}

int main()
{
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;
    int array[size];
    cout<<"Enter the element in the array :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"The unique number is :"<<unique(array,size);

}