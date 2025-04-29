#include <iostream>
#include <climits>  // Include this for INT_MAX
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
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

    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX)
        cout << "No second smallest element found!" << endl;
    else
        cout << "The second smallest element is: " << secondSmallest << endl;

    return 0;
}