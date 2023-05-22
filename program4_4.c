// Write a program which accept three number and print its multiplication

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 0;
    if(iNo1 == 0 && (iNo2 && iNo3) !=0 )
    {
        return iNo2 * iNo3;
    }
    else if (iNo2 == 0 && (iNo1 && iNo3)!=0)
    {
        return iNo1 * iNo3;
    }
    else if(iNo3 == 0 && (iNo1 && iNo2)!=0)
    {
        return iNo1 * iNo2;
    }
    else if(iNo1 != 0 && (iNo2 && iNo3)==0 )
    {
        return iNo1;
    }
    else if(iNo2 != 0 && (iNo1 && iNo3)==0 )
    {
        return iNo2;
    }
    else if(iNo3 != 0 && (iNo1 && iNo2)==0 )
    {
        return iNo3;
    }
    else
    {
        iMul = iNo1 * iNo2 * iNo3;
    }
    return iMul;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;
    printf("Enter three Number:\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is:%d",iRet);

    return 0;
}