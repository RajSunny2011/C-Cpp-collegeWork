#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int CountListNode(struct node *Node){
    int count = 0;
    while (Node != NULL){
        Node = Node->next;
        count++;
    }
    return count;
}

struct node *CreateLinkedList(int Number_of_elements){
    struct node *head = malloc(sizeof(struct node));
    int n;
    printf("Enter Data to be stored: ");
    scanf("%d",&n);
    head->data = n;
    head->next = NULL;
    struct node *temp;
    temp = head;
    for (int i = 1; i < Number_of_elements; i++) {
        struct node *new_node = malloc(sizeof(struct node));
        int n;
        printf("Enter Data to be stored: ");
        scanf("%d",&n);
        new_node->data = n;
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
        if (temp==NULL){
            return NULL;
        }
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
            if (temp==NULL){
                return NULL;
            }
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

struct node *reverseList(struct node *Node){
    struct node *head = Node;
    struct node *temp = NULL;
    struct node *prev;
    while(head!=NULL){
        prev = A
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
    printf("Number of nodes: %d\n",CountListNode(temp));
    temp = ReverseLinkedList(temp);
    PrintList(temp);
    int inspos,insval;
    printf("Enter position to insert: ");
    scanf("%d",&inspos);
    printf("Enter value to insert: ");
    scanf("%d",&insval);
    temp = InsertNode(temp,inspos,insval);
    PrintList(temp);
    int delpos;
    printf("Enter position to delete: ");
    scanf("%d",&delpos);
    temp = DeleteNode(temp,delpos);
    PrintList(temp);
    FreeList(temp);
    return 0;
}