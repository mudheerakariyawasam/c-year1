#include <stdio.h>

int findCube(int num){
    return num*num*num;
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("\nThe cube of %d is: %d",num,findCube(num));
}
