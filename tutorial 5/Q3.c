#include <stdio.h>
int total=0;
int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    findSum(num);
}

void findSum(int num){
    if(num>0){
        int x=num%10;
        total+=x;
        findSum(num/10);
    }else{
        printf("\nTotal is: %d",total);
    }
}
