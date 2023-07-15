#include <stdio.h>

void checkArmstrong(int start,int end){
        for(int i=start;i<end;i++){
            printArmstrong(i);
        }
}

void printArmstrong(int num){
    int sum=0;
    int temp=num;
    int count;
    while(temp>0){
        count=temp%10;
        sum+=count*count*count;
        temp=temp/10;
    }
    if(num==sum){
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
         checkArmstrong(start,end);
    }else{
        printf("Invalid Intervals");
    }
}
