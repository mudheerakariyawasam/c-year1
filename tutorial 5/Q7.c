#include <stdio.h>
int no;
int min=100,max=0;
int main(){
    printf("Enter the number of elements: ");
    scanf("%d",&no);

    int array[no];

    for(int i=0;i<no;i++){
        printf("Enter Value: ");
        scanf("%d",&array[i]);
    }

    findMax(array,0);
}

void findMax(int array[no],int num){
    if(num<no){
        if(num>max){
            max=array[num];
        }
        if(num<min){
            min=array[num];
        }
       findMax(array,num+1);
    }else{
        printf("Max is : %d",max);
        printf("\nMin is : %d",min);
    }
}

