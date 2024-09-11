// 2. Using single linked list and functions implement Stack and its operations like insert, delete, and display.
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *CreateStackLinkedList(int Number_of_elements){
    struct node *head = malloc(sizeof(struct node));
    head->data = 0;
    head->next = NULL;
    struct node *temp;
    for (int i = 1; i < Number_of_elements; i++){
        temp = head;
        struct node *newNode = malloc(sizeof(struct node));
        newNode->data = i;
        newNode->next = temp;
        head = newNode;
    }
    return head;
}

struct node *DeleteNode(struct node *Node){
    struct node *temp = malloc(sizeof(struct node));
    temp = Node;
    printf("Element deleted is : %d\n", temp->data);
    Node = Node->next;
    temp->next = NULL;
    free(temp);
    return Node;
}

struct node *InsertNode(struct node *Node,int val){
    struct node *temp = malloc(sizeof(struct node));
    temp = Node;
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=temp;
    return new_node;
}

void PrintList(struct node *Node){
    printf("The data elements of the List are:\n");
    while (Node != NULL) {
        printf("%d\n", Node->data);
        Node = Node->next;
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
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    struct node *temp;
    temp = CreateStackLinkedList(n);
    PrintList(temp);
    temp = DeleteNode(temp);
    PrintList(temp);
    temp = InsertNode(temp,99);
    PrintList(temp);
    FreeList(temp);
    return 0;
}
