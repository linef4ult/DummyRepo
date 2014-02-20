//C13761335 
//Semster 2 Lab 4
//Area of circle and area of square with passing by reference

#include <stdio.h>
#define PI 3.14

//Prototypes
float areaSq(int* i);
float areaCirc(int* j);


//Main
void main(){
    float area1;
    float area2;
    int userIn;
    float ans;
    
    printf("___Area program with passing by reference___\n");
    printf("\nFirst Function: \nEnter a whole number please:");
    scanf("%d", &userIn);
    printf("The area of a square with side %d is %f", userIn, areaSq(&userIn));

    printf("\nSecond Function: \nEnter a whole number please:");
    scanf("%d", &userIn);
    printf("The area of a circle with radius %d is %f", userIn, areaCirc(&userIn));
    
    flushall();
    getchar();
}

float areaSq(int* i){
    float area;
    area = (*i)*(*i);
    
    return area;    
}
float areaCirc(int* j){
    float area;
    area = PI*(*j)*(*j);
    
    return area;
}
