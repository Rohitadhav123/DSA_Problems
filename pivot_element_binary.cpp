#include<iostream>
using namespace std;

int find_pivot_element(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while(start < end)
    {
        if(array[mid] >= array[0])
        {
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    int array[size];
    cout << "Enter the array elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int index = find_pivot_element(array, size);
    cout << "The pivot element is at index: " << index << endl;
    cout << "The pivot value is: " << array[index] << endl;
}




//git reset --soft origin/main
