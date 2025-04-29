#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        cout << "Pass " << i + 1 << ":\n";

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }

            for (int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }

        
        if (!swapped) {
            cout << "No swaps needed, array is sorted!\n";
            break;
        }
        cout << "-----------------\n";
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

    bubbleSort(arr, n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Output:
 Original array: 5 3 8 4 2 

Pass 1:
3 5 8 4 2 
3 5 8 4 2 
3 5 4 8 2 
3 5 4 2 8 
-----------------
Pass 2:
3 5 4 2 8
3 4 5 2 8
3 4 2 5 8
-----------------
Pass 3:
3 4 2 5 8
3 2 4 5 8
-----------------
Pass 4:
2 3 4 5 8
-----------------

Sorted array: 2 3 4 5 8

*/