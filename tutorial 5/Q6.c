#include <stdio.h>
int no,total;
int main(){
    printf("Enter the number of elements: ");
    scanf("%d",&no);

    int array[no];

    for(int i=0;i<no;i++){
        printf("Enter Value: ");
        scanf("%d",&array[i]);
    }

    sumArray(array,no,0);
}

void sumArray(int array[no],int limit,int num){
    if(num<limit){
            total+=array[num];
       sumArray(array,no,num+1);
    }else{
        printf("Total is : %d",total);
    }
}

