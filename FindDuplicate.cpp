#include<iostream>
using namespace std;

int duplicate(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
                return array[i];

            }
            
        }
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;

    int array[size];
    cout<<"Enter the element in tha array :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }

    cout<<"The douplciate number is that "<<duplicate(array,size);

    return 0;
}