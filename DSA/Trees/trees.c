#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data){
    struct node* node = calloc(1,sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void printIndorder(struct node *temp){
    if (temp->left!=NULL){
        printIndorder(temp->left);
    }
    printf("%d ",temp->data);
    if (temp->right!=NULL){
        printIndorder(temp->right);
    }
}

void printPredorder(struct node *temp){
    printf("%d ",temp->data);
    if (temp->left!=NULL){
        printIndorder(temp->left);
    }
    if (temp->right!=NULL){
        printIndorder(temp->right);
    }
}

void printPostorder(struct node *temp){
    if (temp->left!=NULL){
        printIndorder(temp->left);
    }
    if (temp->right!=NULL){
        printIndorder(temp->right);
    }
    printf("%d ",temp->data);
}

int main(){
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
    printIndorder(root);
    printf("\n");
    printPredorder(root);
    printf("\n");
    printPostorder(root);
    return 0;-

}
