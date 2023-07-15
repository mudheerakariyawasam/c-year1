#include <stdio.h>

void checkPrime(int start,int end){
    if(start<=2){
        printf("\n2");
        for(int i=3;i<end;i++){
            printPrime(i);
        }
    }else{
        for(int i=start;i<end;i++){
            printPrime(i);
        }
    }

}

void printPrime(int num){
    int count=0;
    for(int i=2;i<=num;i++){
        if(num%i!=0){
            count++;
        }else{
            break;
        }
    }
    if(count!=0){
        printf("\n%d",num);
    }
}

int main(){
    int start,end;
    printf("Enter a starting point: ");
    scanf("%d",&start);
    printf("Enter an ending point: ");
    scanf("%d",&end);

    if(start<end && start>0){
         checkPrime(start,end);
    }else{
        printf("Invalid Intervals");
    }
}
