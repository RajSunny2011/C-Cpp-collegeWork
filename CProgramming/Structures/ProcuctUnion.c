#include <stdio.h>
#include <string.h>
union product {
    char product_name[50];
    float price_per_unit;
    int quantity_purchased;
    float amount_spent;
};
int main() {
    union product prod_details;
    printf("Enter product name: ");
    scanf("%s", prod_details.product_name);
    char name[50];
    strcpy(name,prod_details.product_name);
    printf("Enter price per unit: ");
    scanf("%f", &prod_details.price_per_unit);
    float price = prod_details.price_per_unit;
    printf("Enter quantity purchased: ");
    scanf("%d", &prod_details.quantity_purchased);
    int quantity = prod_details.quantity_purchased;
    float amount = price * quantity;
    printf("Product Details:\n");
    printf("Name: %s\n", name);
    printf("Price per unit: $%.2f\n", price);
    printf("Quantity purchased: %d\n", quantity);
    printf("Amount spent: $%.2f\n", amount);
    return 0;
}