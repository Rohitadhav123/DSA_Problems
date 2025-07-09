#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter " << n1 << " sorted elements:\n";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter " << n2 << " sorted elements:\n";
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int arr3[n1 + n2]; // Merged array
    int i = 0, j = 0, k = 0;

    // Merge both sorted arrays
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    // Remaining elements
    while(i < n1) arr3[k++] = arr1[i++];
    while(j < n2) arr3[k++] = arr2[j++];

    // Display result
    cout << "Merged sorted array: ";
    for(int x = 0; x < n1 + n2; x++) {
        cout << arr3[x] << " ";
    }

    return 0;
}
