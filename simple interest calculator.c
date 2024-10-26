#include<stdio.h>
#include<conio.h>
int main()
{
    float principle,rate,time,simpleinterest;
    printf("please enter the principle amount:");
    scanf("%f",&principle);
    printf("please enter the rate (in percentage):");
    scanf("%f",&rate);
    printf("please enter the time (in year):");
    scanf("%f",&time);
    simpleinterest =(principle*rate*time)/100;
    printf("the simple interest is: %.2f\n",simpleinterest);
    getch();

}