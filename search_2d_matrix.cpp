#include<iostream>
using namespace std;


void binary_search(int array[][3],int target,int nRow,int nCol)

{
    int start=0;
    int end=nRow*nCol-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        int element=array[mid/nCol][mid%nCol];
        if(element==target)
        {
            cout<<"Searched element :"<<element<<endl;
            return;
        }
        else if(element < target)
        {
            start=mid+1;
        }
        else if (element > target)
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
}

int main()
{
    int nRow;
    cout<<"Enter the total number of rows:";
    cin>>nRow;
    int nCol;
    cout<<"Enter the totalnumber of col :";
    cin>>nCol;

    int array[3][3];
    cout<<"Enter the element in the array :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>array[i][j];
        }
    }

    cout<<"Display array :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter your target :";
    cin>>target;
    binary_search(array,target,nRow,nCol);
}