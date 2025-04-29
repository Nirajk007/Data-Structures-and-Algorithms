#include <iostream>
using namespace std;

#define MAXSTK 5

void pop(int stack[], int &top) {
    if (top == -1) {
        cout << "UNDERFLOW" << endl;
        return;
    }
    cout << "Popped element: " << stack[top] << endl;
    top = top - 1;
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
    int stack[MAXSTK] = {10, 20, 30, 40, 50}; 
    int top = 4; 
    
    
    pop(stack, top);
    pop(stack, top);
    pop(stack, top);
    pop(stack, top);
    pop(stack, top);
    pop(stack, top); 

    displayStack(stack, top);
    
    return 0;
}
/*
Output:
Popped element: 50
Popped element: 40
Popped element: 30
Popped element: 20
Popped element: 10
UNDERFLOW
Stack is empty.
*/