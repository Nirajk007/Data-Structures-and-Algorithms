#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


void merge(int arr[], int left, int mid, int right, int &pass) {
    int n1 = mid - left + 1; 
    int n2 = right - mid;    

    
    int L[n1], R[n2];

    
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    
    cout << "Pass " << pass++ << ": ";
    printArray(arr, right + 1);
}


void mergeSort(int arr[], int left, int right, int &pass) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid, pass); 
        mergeSort(arr, mid + 1, right, pass); 
        merge(arr, left, mid, right, pass); 
    }
}


int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pass = 1;

    cout << "Initial Array: ";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1, pass);

    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}
/*
Output:
Initial Array: 10 7 8 9 1 5 
Pass 1: 7 10 
Pass 2: 7 8 10 
Pass 3: 7 8 10 1 9 
Pass 4: 7 8 10 1 5 9 
Pass 5: 1 5 7 8 9 10 
Sorted Array: 1 5 7 8 9 10 
*/