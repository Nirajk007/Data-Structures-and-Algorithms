#include <iostream>
using namespace std;

#define N 5

void deleteItem(int queue[], int &front, int &rear){
    if (front == -1) {
        cout << "UNDERFLOW" << endl;
        return;
    }
    cout << "Deleted element: " << queue[front] << endl;
    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (front == N - 1) {
        front = 0;
    } else {
        front = front + 1;
    }
}

void displayQueue(int queue[], int front, int rear){
    if (front == -1) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Queue elements: ";
    int i = front;
    while (true) {
        cout << queue[i] << " ";
        if (i == rear) break;
        i = (i + 1) % N;
    }
    cout << endl;
}

int main() {
    int queue[N] = {10, 20, 30, 40, 50}; 
    int front = 0, rear = 4; 
    
    deleteItem(queue, front, rear);
    deleteItem(queue, front, rear);
    deleteItem(queue, front, rear);
    deleteItem(queue, front, rear);
    deleteItem(queue, front, rear);
    deleteItem(queue, front, rear); 
    
    
    displayQueue(queue, front, rear);
    
    return 0;
}

/*
Output:
Deleted element: 10
Deleted element: 20
Deleted element: 30
Deleted element: 40
Deleted element: 50
UNDERFLOW
Queue is empty.
*/