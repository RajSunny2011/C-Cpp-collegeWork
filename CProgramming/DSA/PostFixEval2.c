#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node{
    int flag;
    int operand;
    char operator;
    struct Node *prev;
};

int numberCheck(char symbol) {return (symbol >= '0' && symbol <= '9');}

int operatorCheck(char symbol) {return (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '^');}

int evaluate(struct Node temp){
    int op1,op2;
    char sym;
    while (temp->prev != NULL){
        if (temp->flag){
            op2 = temp
        }else{
            printf("%d", temp->operand);
        }
        if (temp->prev->prev != NULL){
            printf(" -> ");
        }
        temp = temp->prev;
    }
}

int main(){
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    struct Node *head = malloc(sizeof(struct Node));
    head->prev = NULL;
    struct Node *temp;
    for (int i = 0; i < n; i++){
        temp = head;
        struct Node *newNode = malloc(sizeof(struct Node));
        char val[10];
        scanf("%s",&val);
        if (numberCheck(val[0])){
            int Num = 0;
            int count = 0;
            while (val[count] != NULL){
                Num = Num*10+((int)val[count] - '0');
                count++;
            }
            newNode->operand = Num;
            newNode->flag = 0; 
        }
        else if(operatorCheck(val[0])){
            newNode->operator = val[0];
            newNode->flag = 1;
        }
        newNode->prev = temp;
        head = newNode;
    }
    printf("The data elements of the structure are:\n");
    temp = head;
    while (temp != NULL){
        struct Node *next_node = temp->prev;
        free(temp);
        temp = next_node;
    }
    return 0;
}
