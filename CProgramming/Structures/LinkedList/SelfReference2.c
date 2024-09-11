#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *previous;
};

int main(){
    int n;
    printf("ENter the number of nodes needed: ");
    scanf("%d",&n);
    struct node *head = calloc(1,sizeof(struct node));
    head->data = 0;
    head->previous = NULL;
    struct node *temp;
    temp = head;
    for (int i = 1; i<=n; i++){
        struct node *newNode = calloc(1,sizeof(struct node));
        temp->next = newNode;
        newNode->data = i;
        newNode->previous = temp;
        newNode->next = NULL;
        temp = newNode;
    }
    temp = head;

    while (temp->next!=NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
}
