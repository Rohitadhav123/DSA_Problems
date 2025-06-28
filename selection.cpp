#include<iostream>
using namespace std;

int selection_sort(int array[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<size;j++)
        {
            if(array[j]<array[minindex])
            {
                minindex=j;
            }
        }
        int temp =array[minindex];
        array[minindex]=array[i];
        array[i]=temp;

       

    }

}
int sorted_display(int array[],int size)
{
    cout<<"sorted array :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<< " "<<endl;
    }
}
int main()
{

    int size;
    cout<<"Enter the total size of array :";
    cin>>size;
    int array[size];
    cout<<"Enter the element in array :";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    selection_sort(array,size);
    
   sorted_display(array,size);
}