#include <stdio.h>
#include <math.h>  
#define MAX_SIZE 100
int stack[MAX_SIZE];  
int top = -1;

void push(int item) {  
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow\n");  
        return;  
    }  
    top++;
    stack[top] = item;  
}  
int pop() {  
    if (top < 0) {  
        printf("Stack Underflow\n");  
        return -1;  
    }  
    int item = stack[top];  
    top--;  
    return item;  
}

int numberCheck(char symbol) {return (symbol >= '0' && symbol <= '9');}

int operatorCheck(char symbol) {return (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '^');}

int main() {  
    char expres[] = "5 38 + 9 ^";
    int i = 0, op1, op2, result, num = 0;
    char val = expres[i];
    while (val != '\0') {
        if (numberCheck(val)){
            num = num*10 + (val-'0');
        }  
        else if (operatorCheck(val)){
            num = 0;
            op2 = pop();
            op1 = pop();
            switch(val) {  
                case '+': result = op1 + op2; 
                case '-': result = op1 - op2;
                case '*': result = op1 * op2;
                case '/': result = op1 / op2;
                case '^': result = pow(op1, op2);
            }  
            push(result);
        }
        else{
            if(numberCheck(expres[i-1])){
                push(num);
            }
            num = 0;
        }
        i++;  
        val = expres[i];  
    }  
    result = pop();
    printf("Result= %d\n", result);  
    return 0;
}