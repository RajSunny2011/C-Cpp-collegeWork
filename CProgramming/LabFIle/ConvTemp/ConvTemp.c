#include <stdio.h>

void main(){
    float c,f,k;
    printf("Enter in Celcius: ");
    scanf("%f",&c);

    f = (1.8*c)+32;
    k = c + 273.15;
    printf("Temperature in kelvin: %f\nTemperature in farenheit: %f",k,f);

}
