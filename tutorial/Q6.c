#include <stdio.h>

void checkArmstrong(int num){
    int sum=0;
    int temp=num;
    int count;
    while(temp>0){
        count=temp%10;
        sum+=count*count*count;
        temp=temp/10;
    }
    if(num==sum){
        printf("%d is Armstrong",num);
    }
    else{
        printf("%d is not Armstrong",num);
    }
}

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    checkArmstrong(num);
}


