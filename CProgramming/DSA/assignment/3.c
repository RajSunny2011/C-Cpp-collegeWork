#include <stdio.h>
#define MAX 50
char stack[MAX];
char expres[MAX];
int topexp = -1;
int topstack = -1;

void printexp(){
    for (int i=topexp; i>=0; i--){
        printf("%c ", expres[i]);
    }
    printf("\n");
}

char pop(){
    if (topstack == -1){
        printf("Underflow");
    }else{
        int x = stack[topstack];
        topstack--;
        return x;
    }
}

int pushstack(char val){
    if (topstack == MAX){
        return 0;
    }
    topstack++;
    stack[topstack] = val;
    return 1;
    }
}

int pushexp(char val){
    if (topexp == MAX){
        return 0;
    }
    topexp++;
    expres[topexp] = val;
    return 1;
    }
}

int numberCheck(char symbol) {return (symbol >= '0' && symbol <= '9');}

int operatorCheck(char symbol) {return (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '^');}

int parenthesisCheck(char symbol) {if (symbol == '(' || symbol == ')'){return (symbol == ')')+1;}return 0;}

int precedence(char symbol1, char symbol2){
    if (symbol1 == '+' || symbol1 == '-'){
        return (symbol2 == '*' || symbol2 == '/' || symbol2 == '^');
    }
    if (symbol1 == '*' || symbol1 == '/'){
        return (symbol2 == '^');
    }
    if (symbol1 == '^'){
        return 0;
    }
}

int main(){
    char infix[] = "5+(2*3-(1/2^3)*2)*3)";
    int size = sizeof(infix)/sizeof(infix[0]);
    pushstack('(');
    for (int i = 0; i<size; i++){
        char c = infix[i];
        if (numberCheck(c)){
            pushexp(c);
        }
        else if (operatorCheck(c)){
            if (precedence(c,stack[topstack])){
                pushexp(pop());
                pushstack(c);
            }else{
                pushstack(c);
            }
        }
        else if (parenthesisCheck(c) == 1){
            pushstack(c);
        }
        else if (parenthesisCheck(c) == 2){
            while (1){
                int stackTopValue = pop();
                if (parenthesisCheck(stackTopValue) == 1){
                    break;
                }
                else{
                    pushexp(stackTopValue);
                }
            }
        }
    }
    printf("%s",expres);
    return 0;
}