#include <stdio.h>

int main(){
    int num1,num2,gcd;
    printf("Input Number 1: ");
    scanf("%d",&num1);
    printf("Input Number 2: ");
    scanf("%d",&num2);

    if(num1>num2){
        getGCD(num2,num1);
    }else{
        getGCD(num1,num2);
    }


}
void getGCD(int num1,int num2){
    int i=2;
    int gcd=0;
    while(i<=num1){
        if(num1%i==0){
            if(num2%i==0){
                gcd=i;
            }
        }
        i++;
    }
    printf("%d",gcd);
}
