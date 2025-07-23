#include<iostream>
using namespace std;

void printwave(int array[][3],int row,int col)
{
    for(int j=0;j<col;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<row;i++)
            {
                cout<<array[i][j]<<" ";
            }
        }
        else{
            for(int i=row-1;i>=0;i--)
            {
                cout<<array[i][j]<<" ";
            }
        }
    }
}

int main()
{
    int array[3][3];
    cout<<"Enter the element in the array :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<"display 2d array :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    printwave(array,3,3);
}