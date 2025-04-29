#include <iostream>
using namespace std;

#define MAXSTK 5 

void push(int stack[], int &top, int item) {
    if (top == MAXSTK - 1) {
        cout << "OVERFLOW" << endl;
        return;
    }
    top = top + 1;
    stack[top] = item;
}

void displayStack(int stack[], int top) {
    if (top == -1) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    int stack[MAXSTK];
    int top = -1; 
    
    push(stack, top, 10);
    push(stack, top, 20);
    push(stack, top, 30);
    push(stack, top, 40);
    push(stack, top, 50);
    push(stack, top, 60); 
    
    displayStack(stack, top);
    
    return 0;
}

/*
Output:
OVERFLOW
Stack elements: 10 20 30 40 50 
*/