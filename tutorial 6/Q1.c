#include <stdio.h>
int main(){
    int max1,max2=0;
    int test_case[]={34, 50, 20, 8, 10, 33, 59, 20, 80, 23, 45, 75};

    for(int i=0;i<12;i++){
        if(test_case[i]>max1){
            max1=test_case[i];
        }
    }

    for(int i=0;i<12;i++){
        if(test_case[i]!=max1){
           if(test_case[i]>max2){
                max2=test_case[i];
           }
        }
    }

    printf("The second large element is: %d",max2);
}
