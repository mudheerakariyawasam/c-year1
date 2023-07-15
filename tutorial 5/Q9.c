#include <stdio.h>
int no;

int main(){
    printf("Enter the number of elements: ");
    scanf("%d",&no);

    int array[no];

    for(int i=0;i<no;i++){
        printf("Enter Value: ");
        scanf("%d",&array[i]);
    }

    printNegative(array,0);
}

void printNegative(int array[no],int num){
    if(num<no){
        if(array[num]<0){
            printf("%d\t",array[num]);
        }
       printNegative(array,num+1);
    }
}

