#include <iostream>
using namespace std;

#define SIZE 5

class PriorityQueue {
private:
    int items[SIZE];
    int count;

public:
    PriorityQueue() {
        count = 0;
    }


    void enqueue(int element) {
        if (count == SIZE) {
            cout << "Queue is full (Overflow)\n";
            return;
        }

        int i;
        for (i = count - 1; i >= 0 && items[i] > element; i--) {
            items[i + 1] = items[i]; 
        }

        items[i + 1] = element;
        count++;

        cout << "Inserted: " << element << endl;
    }

    
    void dequeue() {
        if (count == 0) {
            cout << "Queue is empty (Underflow)\n";
            return;
        }

        cout << "Deleted: " << items[0] << endl;

        
        for (int i = 0; i < count - 1; i++) {
            items[i] = items[i + 1];
        }

        count--;
    }


    void display() {
        if (count == 0) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Priority Queue (Ascending Order): ";
        for (int i = 0; i < count; i++) {
            cout << items[i] << " ";
        }
        cout << endl;
    }
};


int main() {
    PriorityQueue pq;

    pq.enqueue(30);
    pq.enqueue(10);
    pq.enqueue(50);
    pq.enqueue(20);
    pq.enqueue(40);

    pq.display();

    pq.dequeue();
    pq.dequeue();

    pq.display();

    pq.enqueue(15);
    pq.display();

    return 0;
}

/*
Output:
Inserted: 30
Inserted: 10
Inserted: 50
Inserted: 20
Inserted: 40
Priority Queue (Ascending Order): 10 20 30 40 50
Deleted: 10
Deleted: 20
Priority Queue (Ascending Order): 30 40 50
Inserted: 15
Priority Queue (Ascending Order): 15 30 40 50
*/