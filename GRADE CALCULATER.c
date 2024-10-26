#include<stdio.h>
#include<conio.h>
int main(){
    float english,math,physics,average;
    char grade;
    printf("please enter the marks  of english:");
    scanf("%f",&english);
    printf("please enter the marks of math:");
    scanf("%f",&math);
    printf("please enter the value of physics:");
    scanf("%f",&physics);
    average = (english + math+ physics)/3;
    if (average>90);{
        grade ='A+';
    }   
     if(average>80){
          grade='A';
    
    }
    
    else if(average>70) {
        grade='B';
    }
    else if (average>60){
        grade='C';
    } else  {
        grade='F';
    }
    printf("Average marks;%.2lf", average);
    printf("grade: %c\n",grade);
    getch();

}
