// Accept two number from user and display first number in second number of times

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFrequency; iCnt++ )
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCnt = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter Frequency\n");
    scanf("%d",&iCnt);

    Display(iValue, iCnt);

    return 0;
}