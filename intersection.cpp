#include<iostream>
using namespace std;


void interset(int array1[],int size1,int array2[],int size2)
{
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            
            if(array1[i]==array2[j])
            {
                cout<<array1[i] << " ";
            }

        }
    }
}

int main(){
    int size1;
    cout<<"Enter the size of the array 1 :";
    cin>>size1;
    int array1[size1];
    cout<<"Enter the element in the array 1 :"<<endl;

    for(int i=0;i<size1;i++)
    {
        cin>>array1[i];
    }
    int size2;
    cout<<"Enter the size of array 2 :";
    cin>>size2;

    int array2[size2];
    cout<<"Enter the element in the array 2 :"<<endl;
    for(int i=0;i<size2;i++)
    {
        cin>>array2[i];
    }

    cout<<"The intersetes element in the both array1 and array2 :", interset(array1,size1,array2,size2);
    return 0;
}