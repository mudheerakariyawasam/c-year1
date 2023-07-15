#include <stdio.h>
int reverse=0;
int main(){
    int num;
    printf("Input a number: ");
    scanf("%d",&num);
    reverse=getReverse(num);

    if(num==reverse){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
}

int getReverse(int num){
    int reminder;
    if(num<0){
        printf("Enter a valid number");
    }else{
        while(num!=0){
            reminder=num%10;
            reverse=(reverse*10)+reminder;
            num=num/10;
        }

    }

}
