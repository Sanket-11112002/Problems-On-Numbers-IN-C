// Write a program which accept N and print first 5 multiples of N.

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMul = 0 ;
    for(iCnt = 1;iCnt <= 5; iCnt++)
    {
            iMul = iNo * iCnt;
            printf("%d\t", iMul);
    } 
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}

// Time Complexity = O(5)