#include<stdio.h>
#include<conio.h>
void main ()
{
    float f,c;
    printf("put the temperature in fahreinheit: ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("\n temperature in celcius: %f",c);
    getch();
}