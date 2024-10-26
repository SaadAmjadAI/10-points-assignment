#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    char username[20];
    char password[20];
    printf("Plese enter your username:\n");
    scanf("%s",&username);
    printf("please enter your password:\n");
    scanf("%s",&password);
    if (strcmp(username,"admin")== 0 && strcmp(password,"1234")==0){
        printf("login succesful\n");
    }
    else {
        printf("login failed\n");
    }
    getch();
}