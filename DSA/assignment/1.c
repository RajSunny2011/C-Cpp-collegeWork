#include <stdlib.h>
#include <stdio.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *top = NULL;
struct node *root = NULL;

void PushNode(int val){
    if (top == NULL){
        top = malloc(sizeof(struct node));
        root = malloc(sizeof(struct node));
        top->data = val;
        top->next = NULL;
        top->prev = NULL;
        root = top;
        return;
    }
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = top;
    top->next = temp;
    top = temp;
}

int PopNode(){
    if (top == NULL){
        printf("Underflow!");
        return -1;
    }
    struct node *temp = malloc(sizeof(struct node));
    temp = top;
    int x = temp->data;
    top = top->prev;
    top->next = NULL;
    free(temp);
    return x;
}

void PrintList(){
    printf("The data elements of the List are:\n");
    struct node *temp = malloc(sizeof(struct node));
    temp = top;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->prev;
    }
}

void FreeList(){
    while (root != NULL) {
        struct node *next_node = root->next;
        free(root);
        root = next_node;
    }
}

int main(){
    PushNode(1);
    PushNode(2);
    PushNode(3);
    PopNode();
    PrintList();
    FreeList();
    return 0;
}
