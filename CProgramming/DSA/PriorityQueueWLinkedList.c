#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    int priority;
    struct node *next;
};

struct node *front;

struct node *newNode(int d, int p){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->priority = p;
    temp->next = NULL;
    return temp;
}

void enqueue(int element, int priority){
    if (front->priority < priority){
        struct node *new = newNode(element,priority);
        new->next = front;
        front = new;
        return;
    }
    struct node *temp = front;
    while (temp->next != NULL && (temp->next)->priority > priority) {  
        temp = temp->next;  
    }
    struct node *new = newNode(element,priority);
    new->next = temp->next;
    temp->next = new;  
}

int dequeue(){
    int element = front->data;
    front = front->next;
    free(front);
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
    front = newNode(1,3);
    enqueue(2,1);
    enqueue(3,2);
    display();
    FreeList(front);
}