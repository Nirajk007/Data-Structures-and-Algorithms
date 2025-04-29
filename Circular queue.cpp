#include<iostream>
using namespace std;
 
#define SIZE 5

class CircularQueue
{
    private:
        int items[SIZE];
        int front, rear;

    public:
       CircularQueue(){
        front=-1;
        rear=-1;
       }

    void enqueue(int element)
    {
        if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
            cout << "Queue is full\n";
            return;
        }
        else if (front == -1) {
            front = 0;
            rear = 0;
        }
        else if (rear == SIZE - 1 && front != 0) {
            rear = 0;
        }
        else {
            rear++;
        }
        items[rear] = element;
        cout << "Inserted " << element << endl;
    }

    void dequeue(){
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }
    
        cout << "Deleted " <<items[front]<< endl;
    
    
    if (front == rear) {
            front = -1;
            rear = -1;
        }
        else if (front == SIZE - 1) {
            front = 0;
        }
        else {
            front++;
        }
    }

    
        void display(){
            if (front == -1) {
                cout << "Queue is empty\n";
                return;
            }
            cout << "Queue elements: ";
            if (rear >= front) {
                for (int i = front; i <= rear; i++)
                    cout << items[i] << " ";
            } else {
                for (int i = front; i < SIZE; i++)
                    cout << items[i] << " ";
                for (int i = 0; i <= rear; i++)
                    cout << items[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    CircularQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.dequeue();    

    q.display();

    q.enqueue(60);
    q.enqueue(70);

    q.display();

    return 0;

}

/*
Output:
Inserted 10
Inserted 20
Inserted 30
Inserted 40
Inserted 50
Queue elements: 10 20 30 40 50
Deleted 10
Deleted 20
Queue elements: 30 40 50
Inserted 60
Inserted 70
Queue elements: 30 40 50 60 70
*/