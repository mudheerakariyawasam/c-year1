#include <stdio.h>
int main(){
    int ll,ul;
    printf("Enter lower limit: ");
    scanf("%d",&ll);
    printf("Enter upper limit: ");
    scanf("%d",&ul);

    ////////////ODD/////////////////
    if(ll<ul){
        printOdd(ll,ul);
    }
}

void printOdd(int ll, int ul){
    if(ll<=ul){
        if(ll%2==1){
            printf("%d\n",ll);
            printOdd(ll+2,ul);
        }else{
           printOdd(ll+1,ul);
        }
    }
}


void printEven(int ll, int ul){
    if(ll<=ul){
        if(ll%2==0){
            printf("%d\n",ll);
            printEven(ll+2,ul);
        }else{
           printEven(ll+1,ul);
        }
    }
}
