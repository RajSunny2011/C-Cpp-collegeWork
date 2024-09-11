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
    while (temp->next != NULL) {
        temp = temp->next;
    }
    new_node->next=NULL;
    temp->next=new_node;
    return Node;
}

struct node *DeleteNode(struct node *Node,int Index){
    struct node *temp = malloc(sizeof(struct node));
    temp = Node;
    printf("Element deleted is : %d\n", temp->data);
    Node = Node->next;
    temp->next = NULL;
    free(temp);
    return Node;
}

void PrintList(struct node *Node){
    printf("The elements of the List are: ");
    while (Node != NULL) {
        printf("%d", Node->data);
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
    printf("\n");
    int a;
    printf("Enter Value to be added to the list: ");
    scanf("%d",&a);
    temp = InsertNode(temp,0,a);
    PrintList(temp);
    printf("\n");
    temp = DeleteNode(temp,0);
    PrintList(temp);
    FreeList(temp);
    printf("\n");
    return 0;
}
