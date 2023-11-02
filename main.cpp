#include <iostream>
using namespace std;

// Function to rotate array
void Rotate(int arr[], int d, int n)
{
    // Storing rotated version of array
    // Dynamically allocate memory for the temp array
    // @note: `int*` is a pointer to an integer
    int* tempArr = new int[n];
    // Keeping track of the current index
    // of tempArr[]
    int currentIndexOfTemp = 0;
    // Storing the n - d elements of
    // array arr[] to the front of temp[]
    for (int i = d; i < n; i++) {
        tempArr[currentIndexOfTemp] = arr[i];
        currentIndexOfTemp++;
    }
    // Storing the first d elements of array arr[]
    // into tempArr
    for (int i = 0; i < d; i++) {
        tempArr[currentIndexOfTemp] = arr[i];
        currentIndexOfTemp++;
    }

    // Copying the elements of tempArr[] in arr[]
    // to get the final rotated array
    for (int i = 0; i < n; i++) {
        arr[i] = tempArr[i];
    }
    // Deallocate memory
    delete[] tempArr;
}

// Function to print elements of array
void PrintTheArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// Driver code
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int d;
    cout << "Enter the number of rotations: ";
    cin >> d;
    // Function calling
    Rotate(arr, d, N);
    PrintTheArray(arr, N);
    return 0;
}
