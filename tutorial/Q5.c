#include <stdio.h>

void checkPrime(int num){
    if(num==0|num==1){
        printf("Not a Prime Number");
    }else{
        for(int i=2;i<num;i++){
            if(num%i!=0){
                printf("Prime Number");
                break;
            }else{
                 printf("Not a Prime Number");
                 break;
            }
        }
    }
}

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    checkPrime(num);
}
