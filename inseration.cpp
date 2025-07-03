#include<iostream>
using namespace std;

void insertion_sort(int array[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;

        
        while(j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;  
    }
}

int main()
{
    int size;
    cout << "Enter the total elements of array: ";
    cin >> size;

    int array[size];
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    insertion_sort(array, size);

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
