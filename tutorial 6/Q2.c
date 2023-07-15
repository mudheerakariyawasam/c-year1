#include <stdio.h>
int main(){
    int count=0;
    int test_case[]= {34, 50, 20, -8, 10, -33, 59, 20, -80, 23, -45, 75};

    for(int i=0;i<12;i++){
        if(test_case[i]<0){
            count++;
        }
    }

    printf("The number of negative elements are: %d",count);
}
