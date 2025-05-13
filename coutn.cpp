#include<iostream>
using namespace std;

void printDuplicates(int array[], int size) {
    bool printed[size] = {false}; // track already printed duplicates

    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(array[i] == array[j] && !printed[i]) {
                cout << array[i] << " ";
                printed[i] = true;
                break; // stop checking more duplicates of the same value
            }
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];
    cout << "Enter the elements in the array:\n";
    for(int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "The duplicate elements are: ";
    printDuplicates(array, size);

    return 0;
}
