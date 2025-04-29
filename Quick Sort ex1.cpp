#include <iostream>
using namespace std;
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int partition(int arr[], int low, int high, int &pass) {
    int pivot = arr[high];
    int i = low - 1;       

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) { 
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); 
    cout << "Pass " << pass++ << ": ";
    printArray(arr, high + 1);

    return i + 1;
}
void quickSort(int arr[], int low, int high, int &pass) {
    if (low < high) {
        int pi = partition(arr, low, high, pass);

        quickSort(arr, low, pi - 1, pass); 
        quickSort(arr, pi + 1, high, pass); 
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pass = 1;

    cout << "Initial Array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1, pass);

    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}

// Output:
/*
Initial Array: 10 7 8 9 1 5 
Pass 1: 1 5 8 9 10 7 
Pass 2: 1 5 7 9 10 8 
Pass 3: 1 5 7 8 10 9 
Pass 4: 1 5 7 8 9 10 
Sorted Array: 1 5 7 8 9 10 
*/