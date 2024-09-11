#include <stdio.h>
int main(){ 
    struct product{
        char name[20];
        float price;
        int quantity;
        float amount;
    };
    struct product p;
    printf("Enter the product name: ");
    scanf("%s", p.name);
    printf("Enter the price per unit: ");
    scanf("%f", &p.price);
    printf("Enter the number of quantities purchased: ");
    scanf("%d", &p.quantity);
    p.amount = p.price * p.quantity;
    printf("Product name: %s\n", p.name); 
    printf("Price per unit: %.2f\n", p.price); 
    printf("Number of quantities purchased: %d\n", p.quantity); 
    printf("Amount spent: %.2f\n", p.amount);
    return 0;
}