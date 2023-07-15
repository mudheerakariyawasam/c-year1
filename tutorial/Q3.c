#include <stdio.h>

void printMinMax(int num1,int num2){
    if(num1>num2){
        printf("\nThe maximum number is %d: ",num1);
        printf("\nThe minimum number is %d: ",num2);
    }else{
        printf("\nThe maximum number is %d: ",num2);
        printf("\nThe minimum number is %d: ",num1);
    }
}
int main(){
    int num1, num2;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("\nEnter number 2: ");
    scanf("%d",&num2);
    printMinMax(num1,num2);
}
