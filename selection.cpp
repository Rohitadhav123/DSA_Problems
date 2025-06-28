#include<iostream>
using namespace std;


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
//     selection_sort(array,size);
    
//    sorted_display(array,size);
// }