#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "At least two elements are required!" << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements: ";
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = arr[0], second = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -1) {
        cout << "No second largest element found!" << endl;
    } else {
        cout << "The second largest element is: " << second << endl;
    }

    return 0;
}