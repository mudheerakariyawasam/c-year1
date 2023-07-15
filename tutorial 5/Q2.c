#include <stdio.h>
int total=0;
int main(){
    int ll,ul;
    printf("Enter lower limit: ");
    scanf("%d",&ll);
    printf("Enter upper limit: ");
    scanf("%d",&ul);

    ////////////ODD/////////////////
    if(ll<ul){
        sumOdd(ll,ul);
    }
}

void sumOdd(int ll, int ul){
    if(ll<=ul){
        if(ll%2==1){
            total+=ll;
            sumOdd(ll+2,ul);
        }else{
           sumOdd(ll+1,ul);
        }
    }else{
        printf("Total is: %d",total);
    }
}


void sumEven(int ll, int ul){
    if(ll<=ul){
        if(ll%2==0){
            total+=ll;
            sumEven(ll+2,ul);
        }else{
           sumEven(ll+1,ul);
        }
    }else{
        printf("Total is: %d",total);
    }
}
