#include<iostream>
using namespace std;
struct Node {
    int info;
    Node* next;
};

Node*start=nullptr;
Node*current=nullptr;

void Create(int item){
    Node* newnode=new Node;
    newnode->info=item;
    newnode->next=nullptr;

    if(start==nullptr){
        start=newnode;
        current=newnode;
    }
    else{
        current->next=newnode;
        current=newnode;
    }
}

void Display(){
    Node* temp=start;
    cout<<"The linked list is: ";
    while(temp!=nullptr){
        cout<<temp->info<<" ->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    int n, item;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter the value of node "<<i+1<<": ";
        cin>>item;
        Create(item);
    }
    Display();
    return 0;
}

/*
OUTPUT:
Enter the number of nodes: 5
Enter the value of node 1: 40
Enter the value of node 2: 78
Enter the value of node 3: 56
Enter the value of node 4: 41
Enter the value of node 5: 12
The linked list is: 40 ->78 ->56 ->41 ->12 ->NULL
*/