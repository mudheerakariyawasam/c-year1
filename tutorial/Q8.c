#include <stdio.h>

void checkInterval(int num1,int num2){
    for(int i=num1;i<num2;i++){
        checkStrong(i);
    }
}

void checkStrong(int num){
    int temp=num,total=0,count;
    while (temp>0){
        count=calculateTotal(temp%10);
        total+=count;
        temp=temp/10;
    }
    if(num==total){
        printf("\n%d",num);
    }
}

int calculateTotal(int num){
    int total=1;
    for(int i=1;i<=num;i++){
        total=total*i;
    }
    return total;
}

int main(){
    int num1,num2;
    printf("Enter a starting point: ");
    scanf("%d",&num1);
    printf("Enter an ending point: ");
    scanf("%d",&num2);
    if(num1<num2 && num1!=0){
        checkInterval(num1,num2);
    }else{
        printf("Enter a valid Interval");
    }

}
