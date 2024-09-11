#include<stdio.h>
#define MAX 5  
int queue[MAX];  
int front = -1;  
int rear = -1;  
void insert(int element) {  
    if (front == (rear+1)%MAX) {  
        printf("Queue is full");  
        return;}
    else if (front == -1) {  
        front = 0;  }
    if (rear == MAX-1){
        rear = 0;}
    else{
        rear++;}
    queue[rear] = element;  
}  
int delete() {  
    if (front == -1 || front == rear) {
        return -1;}
    int element = queue[front];
    if (front == MAX-1){
        front = 0;}
    else{
        front++;}  
    return element;  
} 
void display(){
    if (front==-1){
        printf("Queue is Full.");
        return;
    }
    int i = front;
    do{
        printf("%d ",queue[i]);
        i = (i+1)%MAX;
    }while(i != (rear+1)%MAX);
    printf("\n")
}
int main() {  
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    delete();
    insert(60);
    display();
    delete();
    insert(70);
    display();
    delete();
    delete();
    delete();
    delete();
    delete();
    insert(80);
    delete();
    display();
    return 0;
} 