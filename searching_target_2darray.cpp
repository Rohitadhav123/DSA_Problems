#include<iostream>
using namespace std;

bool search(int array[][3],int target,int row,int col)
{
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            if(array[row][col]==target)
            {
                return true;
            }
           
        }
    }
    return false;
}

int main()
{

    int array[3][3];
    cout<<"Enter the element in array;"<<endl;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cin>>array[row][col];
        }
    }
    int target;
    cout<<"Enter the searching value :";
    cin>>target;

    if(search(array,target,3,3))
    {
        cout<<"the element is founded";
    }
    else{
        cout<<"Element is not found";
    }
    
}