#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

Node* top = NULL;

bool isempty(){
    if(top == NULL)
        return true;
    return false;
}

void push(int value){
    Node* ptr = new Node();
    ptr->data = value;
    ptr->next = top;
    top = ptr;
}

void pop(){
    if(isempty())
        cout << "stack is empty";
    else{
        Node *ptr = top;
        top = top->next;
        delete(ptr);
    }
}

void showtop(){
    if(isempty())
        cout<<"stack is empty";
    else
        cout<<"element at top is"<<top->data;
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    showtop();
    return 0;
}
