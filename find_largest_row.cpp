#include<iostream>
using namespace std;

void addition_of_row(int array[][3],int row,int col)
{
   
    int maxsum= -1;
    int rowindex= -1;
    cout<<"Addition of row :"<<endl;
    for(int row=0;row<3;row++)
    {
         int sum=0;
        for(int col=0;col<3;col++)
        {
             
            sum +=array[row][col];
        }
        cout<<sum<<endl;

        if(sum>maxsum)
        {
            maxsum=sum;
            rowindex=row;
        }

    }
    cout<<"The largest row: "<<rowindex +1<<" And total addition is :"<<maxsum<<endl;
}
void addition_of_col(int array[][3],int row,int col)
{
    for(int col=0;col<3;col++)
    {
        int sum=0;
        for(int row=0;row<3;row++)
        {
            sum += array[row][col];
        }
        cout<<sum<<endl;
    }
}

int main()
{
    int array[3][3];
    cout<<"Enter the element in the array :"<<endl;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cin>>array[row][col];
        }
    }
    cout<<"Display array :"<<endl;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout<<array[row][col]<<" ";
        }
        cout<<endl;
    }
    addition_of_row(array,3,3);
    cout<<"Addition of col :"<<endl;
    addition_of_col(array,3,3);

}