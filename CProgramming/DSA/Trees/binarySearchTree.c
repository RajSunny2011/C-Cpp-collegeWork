#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data){
    struct node* node = malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void insertNode(struct node *Node, int data){
    if (data > Node->data){
        if (Node->right==NULL){
            Node->right = newNode(data);
            return;
        }
        insertNode(Node->right, data);
    }
    else{ //this makes it a left oriented tree as any element equal to parent node goes to the left
        if (Node->left==NULL){
            Node->left = newNode(data);
            return;
        }
        insertNode(Node->left, data);
    }
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

void FreeTree(struct node *temp){
    if (temp->left!=NULL){
        FreeTree(temp->left);
    }
    if (temp->right!=NULL){
        FreeTree(temp->right);
    }
    printf("%d ",temp->data);
    free(temp);
}

int main(){
    struct node* root = newNode(10);
    insertNode(root,2);
    insertNode(root,15);
    insertNode(root,11);
    insertNode(root,3);
    insertNode(root,1);
    insertNode(root,0);
    printIndorder(root);
    printf("\n");
    // printPredorder(root);
    // printf("\n");
    FreeTree(root);
    printf("\n");
    return 0;
}
