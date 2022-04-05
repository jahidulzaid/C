#include <stdio.h>
int main(){
    float pi = 3.14;
    float radius;
    float area_of_circle;
    printf("This program calculate area of a Circle.\n");
    printf("Enter the radius of the Circle: ");
    scanf("%f", &radius);
    area_of_circle = pi*(radius*radius);
    printf("The Area of the Circle is %f", area_of_circle);
}