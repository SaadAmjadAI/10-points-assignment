#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3;
    printf("enter the value of num1:");
    scanf("%d",&num1);
    printf("enter the value of num2:");
    scanf("%d",&num2);
    printf("enter the value of num3:");
    scanf("%d",&num3);
    if(num1>num2&num1>num3){
        printf("%d is the largest number",num1);
    }
    else if(num2>num1&num2>num3){
        printf("%d is the largest number",num2);
    }
    else if(num3>num1&num3>num2) {
        printf("%d is the largest number ",num3);
    }
    getch();
}