#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 0;
    head->next = NULL;
    struct node *temp;
    temp = head;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        struct node *new_node = malloc(sizeof(struct node));
        new_node->data = i;
        new_node->next = head;
        temp->next = new_node;
        temp = new_node;
    }
    printf("The data elements of the structure are:\n");
    temp = head;
    printf("%d\n", temp->data);
    temp = temp->next;
    while (temp != head) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp != head) {
        struct node *next_node = temp->next;
        free(temp);
        temp = next_node;
    }
    return 0;
}