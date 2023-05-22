// Write a program which accept one number from user and check whether that number is greater than 100 or not.

#include<stdio.h>

typedef int BOOL;

#define FALSE 0;
#define TRUE 1;

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == 1)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}