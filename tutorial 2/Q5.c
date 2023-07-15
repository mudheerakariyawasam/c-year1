#include <stdio.h>
int main(){
    printFibonnacci(10);
}

void printFibonnacci(int num){
    for(int i=0;i<num;i++){
        printf("%d\n",getFibonacci(i));
    }
}

int getFibonacci(int x){
    if(x==0||x==1){
        return x;
    }else{
        return getFibonacci(x-1)+getFibonacci(x-2);
    }
}

