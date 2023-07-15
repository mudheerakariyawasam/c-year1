#include <stdio.h>
int fac=1;
int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    if(num>0){
        printf("%d! = ",num);
        findFac(num);
    }
}

void findFac(int num){
    if(num>0){
        printf("%d *",num);
        fac*=num;
        findFac(num-1);
    }else{
        printf("\b = %d",fac);
    }
}
