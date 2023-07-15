#include <stdio.h>
int main(){
    int base,expo,num;
    printf("Input a base: ");
    scanf("%d",&base);
    printf("Input a expo: ");
    scanf("%d",&expo);
    num=power(base,expo);
    printf("\nValue: %d",num);
}

int power(int base, int expo){
    int value=1;
    if(expo==0){
        return 1;
    }else if(num==0){
        return 0;
    }
    else if(num>0){
        for(int i=0;i<expo;i++){
            value=base*power(base,expo-1);
        }
    }else{

    }
    return value;
}
