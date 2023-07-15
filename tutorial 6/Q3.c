#include <stdio.h>
int main(){
    int count1=0,count2=0,count3=0,count4=0,count5=0;

    int test_case[]= {1,3,4,2,2,1,1,5,3,1,3,1,5,3};

    for(int i=0;i<14;i++){
        if(test_case[i]==1){
            count1++;
        }else if(test_case[i]==2){
            count2++;
        }else if(test_case[i]==3){
            count3++;
        }else if(test_case[i]==4){
            count4++;
        }else{
            count5++;
        }
    }

    printf("The frequency of 1 is: %d",count1);
    printf("\nThe frequency of 2 is: %d",count2);
    printf("\nThe frequency of 3 is: %d",count3);
    printf("\nThe frequency of 4 is: %d",count4);
    printf("\nThe frequency of 5 is: %d",count5);
}
