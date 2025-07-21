#include<iostream>
using namespace std;

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
    cout<<"Display array :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}
