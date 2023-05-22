// Write a program which accept two number from user and check whether number is equal or not.

#include<stdio.h>

typedef int BOOL;

#define FALSE 0;
#define TRUE 1;

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 =0 ;
    BOOL bRet = FALSE;

    printf("Enter two Number :\n");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == 1)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}