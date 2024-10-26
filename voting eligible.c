#include<stdio.h>
#include<conio.h>
void main()
{
	int person_age;
	printf("please enter the age:");
	scanf("%d",& person_age);
	if (person_age>17){
	 printf("the person is eligible");
	}
	
	else  {
		printf("the person is not eligible");
		
	}
    getch();
}