#include<iostream>
using namespace std;

void pairsum(int array[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(target==array[i]+array[j])
            {
                cout<<array[i]<<"+"<<array[j]<<"="<<target<<endl;
            }
        }
    }

}


int main()
{
    int size;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter the element in the array :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int target;
    cout<<"Enter the target value :";
    cin>>target;
    cout<<"Target value is : ",pairsum(array,size,target);
}