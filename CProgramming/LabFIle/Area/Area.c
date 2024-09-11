#include <stdio.h>

void parallelogram(){
    float a,b,h;
    printf("\nEnter the length of base:");
    scanf("%f",&b);
    printf("Enter the height:");
    scanf("%f",&h);

    a = b*h;
    printf("Area = %f\n",a);
}

void cuboid(){
    float a,l,w,h;
    printf("\nEnter the length:");
    scanf("%f",&l);
    printf("Enter the width:");
    scanf("%f",&w);
    printf("Enter the height:");
    scanf("%f",&h);

    a = l*w*h;
    printf("Volume = %f\n",a);
}

void rhombus(){
    float a,h,s;
    printf("\nEnter the heigth:");
    scanf("%f",&h);
    printf("Enter the length of side:");
    scanf("%f",&s);

    a = h*s;
    printf("Area = %f\n",a);
}

void sphere(){
    float a,r;
    printf("\nEnter the radius:");
    scanf("%f",&r);

    a = 4.18879*r*r*r;
    printf("Volume = %f\n",a);
}

void ellipse(){
    float a,minr,majr;
    printf("\nEnter the minor radius:");
    scanf("%f",&minr);
    printf("Enter the major radius:");
    scanf("%f",&majr);

    a = 3.1415926*minr*majr;
    printf("Area = %f\n",a);
}

void main(){
    while(1){
        int c;
        printf("Select shape:\n1)Parallelogram\n2)Cuboid\n3)Rhombus\n4)Sphere\n5)Ellipse\nEnter a Number(1-5)(0 to exit):");
        scanf("%d",&c);
        if (c == 1){
            parallelogram();
        }
        if (c == 2){
            cuboid();
        }
        if (c == 3){
            rhombus();
        }
        if (c == 4){
            sphere();
        }
        if (c == 5){
            ellipse();
        }
        if (c == 0){
            break;
        }
    }
}

