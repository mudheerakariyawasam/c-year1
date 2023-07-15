#include <stdio.h>
int tot=0;

int main(){
    int v= happy(19);
    printf("%d",v);
}

int sumSquare(int num){

    if(num>0){
        int x=num%10;
        tot+=(x*x);
        return sumSquare(num/10);
    }
    return tot;
}

int happy(int num){
    int x=sumSquare(num);
    if(x>10){
        happy(x);
    }
        if(x==1){
            return 1;
        }else{
            return 0;
        }


}
