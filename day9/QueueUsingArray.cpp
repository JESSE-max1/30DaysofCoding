#include<bits/stdc++.h>
using namespace std;
#define SIZE 5
int A[SIZE];
int front = -1;
int rear = -1;

bool isempty(){
    if(front == -1 &&rear == -1){
        return true;
    }
    return false;
}

void enqueue(int value){
    if((rear = SIZE-1)
        cout <<"queue is full";
    if(front == -1)
        front =0;
    rear++;
    A[rear] = value;
}

void dequeue(){
    if(empty())
        cout <<"queue is empty";
    else if(front == rear){
        front = rear = -1;
    }
    front++;
}
void displayqueue(){
    if(empty())
        cout<<"queue is empty\n";
    else{
        for(int i=front;i<=rear;i++){
            cout<<A[i] <<" ";
        }
    }
}
