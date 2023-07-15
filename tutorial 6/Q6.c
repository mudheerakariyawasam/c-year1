#include <stdio.h>
int main(){
    int odd=0,even=0;

    int test_case[]= {1,3,4,2,2,1,1,5,3,1,3,1,5,3};
    int length=sizeof(test_case)/sizeof(int);

    int copy[length];

    for(int i=0;i<length;i++){
        copy[i]=test_case[i];
    }

}
