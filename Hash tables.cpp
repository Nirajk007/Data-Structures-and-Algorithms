#include <iostream>
using namespace std;

int hashFunction(int key, int tableSize) {
    return key % tableSize;
}

int main() {
    int tableSize;
    cout << "Enter a prime number for hash table size: ";
    cin >> tableSize;

    int n;
    cout << "Enter number of elements to hash: ";
    cin >> n;

    int* hashTable = new int[tableSize];
    for (int i = 0; i < tableSize; i++) {
        hashTable[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        int key;
        cout << "Enter element " << i + 1 << ": ";
        cin >> key;

        int index = hashFunction(key, tableSize);
        while (hashTable[index] != -1) {
            index = (index + 1) % tableSize;
        }

        hashTable[index] = key;
    }

    cout << "\nHash Table:\n";
    for (int i = 0; i < tableSize; i++) {
        cout << i << " --> ";
        if (hashTable[i] != -1)
            cout << hashTable[i];
        else
            cout << "NULL";
        cout << endl;
    }

    delete[] hashTable;
    return 0;
}

/*
OUTPUT:
Enter a prime number for hash table size: 7
Enter number of elements to hash: 5
Enter element 1: 4
Enter element 2: 9
Enter element 3: 6
Enter element 4: 7
Enter element 5: 3

Hash Table:
0 --> 7
1 --> NULL
2 --> 9
3 --> 3
4 --> 4                                                                                                                         
5 --> NULL
6 --> 6
*/