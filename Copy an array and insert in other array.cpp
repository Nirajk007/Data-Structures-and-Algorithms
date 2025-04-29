#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
     int source[n], destination[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> source[i];
    }

    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }

    cout << "Copied array: ";
    for (int i = 0; i < n; i++) {
        cout << destination[i] << " ";
    }

    return 0;
}
