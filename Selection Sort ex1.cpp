#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

    
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

    
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }

        
        cout << "Step " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    selectionSort(arr, n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Output:
Original array: 5 3 8 4 2 

Step 1: 2 3 8 4 5 
Step 2: 2 3 8 4 5 
Step 3: 2 3 4 8 5 
Step 4: 2 3 4 5 8 

Sorted array: 2 3 4 5 8 
*/