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
    if((rear+1)%SIZE == front)
        cout <<"queue is full";
    if(front == -1)
        front =0;
    rear = (rear+1)%SIZE;
    A[rear] = value;
}

void dequeue(){
    if(empty())
        cout <<"queue is empty";
    else if(front == rear){
        front = rear = -1;
    }
    front = (front+1)%SIZE;
}
void displayqueue(){
    if(empty())
        cout<<"queue is empty\n";
    else{
        int i;
        if(front <= rear){
            for(int i=front;i<=rear;i++)
                cout<<A[i]<<" ";
        }
        else{
            i = front;
            while(i <SIZE){
                cout<<A[i]<<" ";
                i++;
            }i=0;
            while(i<=rear)
            {
                cout << A[i] <<" ";
                i++;
            }
        }
    }
}



