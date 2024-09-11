#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int element){
    if (front == NULL){
        front = calloc(1,sizeof(struct node));
        rear = front;
        rear->data = element;
        return;}
    struct node *newnode = calloc(1,sizeof(struct node));
    rear->next = newnode;
    newnode->data = element;
    newnode->next = NULL;
    rear = newnode;
}

int dequeue(){
    if (rear->next == front){
        printf("Queue Underflow");
        return -1;}
    int element = front->data;
    front = front->next;
    return element;
}

void display(){
    struct node *temp = front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void FreeList(struct node *Node){
    while (Node != NULL) {
        struct node *next_node = Node->next;
        free(Node);
        Node = next_node;
    }
}

int main(){
    enqueue(1);
    display();
    dequeue();
    dequeue();
    display();
    FreeList(front);
}