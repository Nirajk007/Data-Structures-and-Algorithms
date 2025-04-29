#include <iostream>
using namespace std;

#define N 5 

void insert(int queue[], int &front, int &rear, int item) {
    if ((front == 0 && rear == N - 1) || (front == rear + 1)) {
        cout << "OVERFLOW" << endl;
        return;
    }
    if (front == -1) { 
        front = 0;
        rear = 0;
    } else if (rear == N - 1) {
        rear = 0;
    } else {
        rear = rear + 1;
    }
    queue[rear] = item;
}

void displayQueue(int queue[], int front, int rear) {
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
    int queue[N];
    int front = -1, rear = -1; 
    
    
    insert(queue, front, rear, 10);
    insert(queue, front, rear, 20);
    insert(queue, front, rear, 30);
    insert(queue, front, rear, 40);
    insert(queue, front, rear, 50);
    insert(queue, front, rear, 60); 
    

    displayQueue(queue, front, rear);
    
    return 0;
}

/*
Output:
OVERFLOW
Queue elements: 10 20 30 40 50 
*/