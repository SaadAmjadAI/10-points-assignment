#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("please enter the year:");
    scanf("%d",&year);
    if((year %4==0 && year %100!=0) || (year %400==0)){
        printf("%d  is a leap year.\n");
    }
    else{
        printf("%d is not leap year.\n",&year);
    }
    getchar();
    getchar();
    getch();
}