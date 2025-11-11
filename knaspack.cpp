#include <iostream>
#include <algorithm>
using namespace std;

struct item {
    int value, weight;
};

// Comparator function to sort by value/weight ratio
bool compare(item a, item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2; // descending order
}

int main() {
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    item arr[n];
    cout << "Enter the value and weight of each item:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i].value >> arr[i].weight;

    int capacity;
    cout << "Enter the knapsack capacity: ";
    cin >> capacity;

    // Step 1: Sort items by value/weight ratio
    sort(arr, arr + n, compare);

    // Step 2: Pick items greedily
    double totalValue = 0.0;

    for (int i = 0; i < n; i++) {
        if (arr[i].weight <= capacity) {
            totalValue += arr[i].value;      // take full item
            capacity -= arr[i].weight;
        } else {
            totalValue += arr[i].value * ((double)capacity / arr[i].weight); // take fraction
            break; // bag full
        }
    }

    cout << "\nMaximum profit (value): " << totalValue << endl;
    return 0;
}
