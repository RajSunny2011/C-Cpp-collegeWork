#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;
struct node *head = NULL;

void enqueue(int element){
    if (front == NULL){
        front = head;
        rear = front;
        rear->data = element;
        return;}
    else if (rear->next==front){
        printf("Queue Overflow.");
        return;}
    rear = rear->next;
    rear->data = element;
}

int dequeue(){
    if (rear == front){
        printf("Queue Underflow");
        return -1;}
    int element = front->data;
    front = front->next;
    return element;
}

void display(){
    struct node *temp = front;
    printf("%d ",temp->data);
    temp = temp->next;
    while(temp!=front){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main(){
    head = calloc(1,sizeof(struct node));
    struct node *temp = head;
    for(int i = 0; i<5; i++){}
        struct node *newnode = calloc(1,sizeof(struct node));
        temp->next = newnode;
        newnode->next = head;
        temp = newnode;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    display();
}