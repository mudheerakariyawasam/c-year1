#include <stdio.h>

void checkOddEven(int num){
    if(num%2==0){
        printf("\nThe number is Even");
    }else{
        printf("\nThe number is Odd");
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0){
       checkOddEven(num);
    }else{
        printf("The number is invalid");
    }

}
