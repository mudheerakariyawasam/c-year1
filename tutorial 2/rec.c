#include <stdio.h>
int main(){
    printN(3,5);
}

void printN(int a ,int b){
    if(a<b){
        printN(a+1,b);
    }
    printf("%d\n",a);
     printf("the new line");
}
