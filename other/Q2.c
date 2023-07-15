#include <stdio.h>
double wage(double hrs){
    return hrs*150;
}

double OT(double hrs){
    return hrs*75;
}

double hometaken(double wage, double OT){
    double total=wage+OT;
    return (total*0.9);
}

int main(){
    printf("%.2f",hometaken(wage(10),OT(4)));
    return 0;
}
