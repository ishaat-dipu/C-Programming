#include<stdio.h>
int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d",&x);
    // typecasting
    float f = (float)x;
    printf("%f",f/2);
    return 0 ;
}