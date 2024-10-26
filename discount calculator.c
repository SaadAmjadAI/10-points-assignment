#include<stdio.h>
#include<conio.h>
int main()
{
    float total_amount,final_amount;
    float discount;
    printf("please enter the total amount");
    scanf("%f",&total_amount);
    if (total_amount>5000){
        discount=0.20;
    }
    else if(total_amount>=3000) {
        discount=0.10;
    }
    else {
        discount=0;
    }
    final_amount =total_amount-(total_amount*discount);
    printf("the final amount is%f",final_amount);
    getch();
}