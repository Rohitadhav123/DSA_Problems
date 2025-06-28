#include <iostream>
using namespace std;

// Function to check if allocation is possible with given maxPages
bool isPossible(int books[], int n, int m, int maxPages) {
    int studentCount = 1;
    int currentPages = 0;

    for (int i = 0; i < n; i++) {
        if (books[i] > maxPages)
            return false;  // one book has more pages than allowed

        if (currentPages + books[i] > maxPages) {
            studentCount++;         // allocate to next student
            currentPages = books[i];
        } else {
            currentPages += books[i];
        }
    }

    return studentCount <= m;
}

// Function to find minimum max pages using binary search
int findMinimumPages(int books[], int n, int m) {
    if (n < m) return -1;  // not enough books

    int sum = 0, maxBook = 0;
    for (int i = 0; i < n; i++) {
        sum += books[i];
        if (books[i] > maxBook)
            maxBook = books[i];
    }

    int low = maxBook, high = sum, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (isPossible(books, n, m, mid)) {
            result = mid;       // try to minimize max pages
            high = mid - 1;
        } else {
            low = mid + 1;      // increase allowed pages
        }
    }

    return result;
}

int main() {
    int books[] = {10, 20, 30, 40};  // pages in books
    int n = 4;                       // number of books
    int m = 2;                       // number of students

    int result = findMinimumPages(books, n, m);
    cout << "Minimum pages: " << result << endl;

    return 0;
}
