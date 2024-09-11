#include<stdio.h>
#define MAX 50  
int queue[MAX];  
int front = -1;  
int rear = -1;  
void insert(int element) {  
    if (rear == MAX - 1) {  
        printf("Queue is full");  
        return;  
    }  
    if (front == -1) {  
        front = 0;  
    }  
    rear++;  
    queue[rear] = element;  
}  
int delete() {  
    if (front == -1 || front > rear) {
        return -1;  
    }  
    int element = queue[front];  
    front++;  
    return element;  
} 
void display(){
    for (int i = front; i <= rear; i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main() {  
    insert(10);  
    insert(20);  
    insert(30);  
    display();
    printf("%d ", delete());  
    printf("%d ", delete());  
    printf("%d ", delete());  
    printf("%d ", delete());  
    return 0;  
} 