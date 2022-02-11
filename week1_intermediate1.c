#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&f);
    c=(f - 32)*5.0/9.0;
    printf("\nCelsius = %.3f",c); 
}