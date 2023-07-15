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

    printArray(array,no,0);
}

void printArray(int array[no],int limit,int num){
    if(num<limit){
       printf("%d\t",array[num]);
       printArray(array,no,num+1);
    }
}

