// 1.Implement single Linked List data structure and its operations like insert and delete in the beginning/end and nth position of the list, and display the items stored in the linked list.

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *CreateLinkedList(int Number_of_elements){
    struct node *head = malloc(sizeof(struct node));
    head->data = 0;
    head->next = NULL;
    struct node *temp;
    temp = head;
    for (int i = 1; i < Number_of_elements; i++) {
        struct node *new_node = malloc(sizeof(struct node));
        new_node->data = i;
        new_node->next = NULL;
        temp->next = new_node;
        temp = new_node;
    }
    return head;
}

struct node *InsertNode(struct node *Node,int Index,int val){
    struct node *temp = malloc(sizeof(struct node));
    temp = Node;
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data=val;
    if (Index==0){
        new_node->next = temp;
        return new_node;
    }
    for (int i = 1; i < Index; i++) {
        temp = temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    return Node;
}

struct node *DeleteNode(struct node *Node,int Index){
    struct node *temp = malloc(sizeof(struct node));
    temp = Node;
    if (Index==0){
        printf("Element deleted is : %d\n", temp->data);
        Node = Node->next;
        temp->next = NULL;
        free(temp);
    }else{
        for (int i = 1; i < Index; i++) {
            temp = temp->next;
        }
        struct node *del = malloc(sizeof(struct node));
        del = temp->next;
        temp->next=(temp->next)->next;
        printf("Element deleted is : %d\n", del->data);
        del->next = NULL;
        free(del);
    }
    return Node;
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
    temp = CreateLinkedList(n);
    PrintList(temp);
    temp = InsertNode(temp,0,9);
    PrintList(temp);
    temp = DeleteNode(temp,0);
    PrintList(temp);
    FreeList(temp);
    return 0;
}
