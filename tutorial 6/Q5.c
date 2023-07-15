#include <stdio.h>
int main(){
    int odd=0,even=0;

    int test_case[]= {1,3,4,2,2,1,1,5,3,1,3,1,5,3};

    for(int i=0;i<14;i++){
        if(test_case[i]%2==1){
            odd++;
        }else{
            even++;
        }
    }

    printf("The number of odd Elements: %d",odd);
    printf("\nThe number of Even Elements: %d",even);
}
