#include<stdio.h>
int main()
{
    float pi=3.1416;
    float r;
    printf("Enter the value of r:");
    scanf("%f",&r);
    float sphare_volume = (4.0/3.0)* pi*r*r*r;
    printf("The value of the Sphare is : %f",sphare_volume);
    return 0;
}