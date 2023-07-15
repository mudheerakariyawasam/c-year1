#include<stdio.h>

int lcm(int x, int y){

    static int NO = 1;
    if(NO%x == 0 && NO%y == 0)
    {
        return NO;
    }
    else
    {
        NO++;
        lcm(x,y);
        return NO;
    }
}
int main()
{
    int x, y;
    printf("Enter 2 integers:\n");
    scanf("%d%d", &x, &y);
    printf("\n LCM of %d and %d is: %d\n", x, y, lcm(x,y));
    return 0;
}
