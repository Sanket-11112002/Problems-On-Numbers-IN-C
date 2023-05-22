// Write the program which accept total marks & obtained marks from user and calculate percentage.

#include<stdio.h>

float Percentage(int iTotal, int iObtain)
{
    float fPer = 0.0f;
    fPer = ((float)iObtain / iTotal) * 100;
    
    return fPer;
}

int main()
{

    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;
    printf("Enter total marks & obtained marks\n");
    scanf("%d %d",&iValue1,&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%0.2f%%\n",fRet);

    return 0;
}