#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

int main(){
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    struct node *head = malloc(sizeof(struct node));
    head->data = 0;
    head->next = NULL;
    struct node *temp;
    for (int i = 1; i < n; i++){
        temp = head;
        struct node *newNode = malloc(sizeof(struct node));
        newNode->data = i;
        newNode->next = temp;
        head = newNode;
    }
    printf("The data elements of the structure are:\n");
    temp = head;
    while (temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL){
        struct node *next_node = temp->next;
        free(temp);
        temp = next_node;
    }
    return 0;
}