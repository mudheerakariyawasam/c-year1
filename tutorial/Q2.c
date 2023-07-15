#include <stdio.h>

#define PI 3.14

double findDimeter(double radius){
    return 2*radius;
}

double findCircumference(double radius){
    return 2*PI*radius;
}

double findArea(double radius){
    return PI*radius*radius;
}
int main(){
    double radius;
    printf("Input a radius: ");
    scanf("%lf",&radius);

    printf("\nThe Dimeter is: %lf",findDimeter(radius));
    printf("\nThe Circumference is: %lf",findCircumference(radius));
    printf("\nThe Area is: %lf",findArea(radius));
    return 0;
}
