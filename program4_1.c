// Write a program which accept name from user and print that name.

#include<stdio.h>

int main()
{
    char Name[20];

    printf("Please enter your name :\n");
    scanf("%[^\n]",Name);

    printf("Your name is :%s\n",Name);

    return 0;
}