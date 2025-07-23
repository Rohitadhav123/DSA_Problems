#include<iostream>
using namespace std;


void rotetad_array(int array[][3])
{
    int n=3;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        swap(array[i][j],array[j][i]);
        }
    }


    for(int i=0;i<n;i++)
    {
            int start=0;int end=n-1;
            while(start<end){
        swap(array[i][start],array[i][end]);
        start++;
        end--;
            }
    }
}
void display(int array[][3])
{
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
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
    cout<<"Original Array :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    rotetad_array(array);
    cout<<"Rotated Array :"<<endl;
    display(array);
}