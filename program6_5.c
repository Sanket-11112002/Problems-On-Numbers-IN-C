// Write a program which accept number from user and display its table in reverse order.

#include<stdio.h>

void TableRev(iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}

// Time Complexity = O(10)