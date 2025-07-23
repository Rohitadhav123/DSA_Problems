#include<iostream>
using namespace std;

void spiral_print(int array[][3], int row, int col)
{
    int top = 0, left = 0;
    int right = col - 1, bottom = row - 1;

    while (top <= bottom && left <= right)
    {
        // Print top row
        for (int i = left; i <= right; i++)
            cout << array[top][i] << " ";
        top++; 

        // Print right column
        for (int i = top; i <= bottom; i++)
            cout << array[i][right] << " ";
        right--;

        // Print bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << array[bottom][i] << " ";
            bottom--;
        }

        // Print left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << array[i][left] << " ";
            left++;
        }
    }
}

int main()
{
    int array[3][3];
    cout << "Enter the elements in array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> array[i][j];
        }
    }

    cout << "Display 2D array:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Spiral print of array:" << endl;
    spiral_print(array, 3, 3);

    return 0;
}
