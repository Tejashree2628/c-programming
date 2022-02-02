#include<stdio.h>

int Power(int coefficent,int exponent)
{  
    int iCnt=0,iTotal=1;
    if(coefficent<0)
    {
       coefficent=-coefficent;
    }
  
  if(exponent<0)
    {
       exponent=-exponent;
    }
  
  for(iCnt=1;iCnt<=exponent;iCnt++)
  {
    iTotal=(coefficent*iTotal);
  }
    return iTotal;
}
int main()
{
int iValue=0,ipower=0,iTotal=0;
printf("enter the coefficent");
scanf("%d",&iValue);
printf("enter the exponent");
scanf("%d",&ipower);
iTotal=Power(iValue,ipower);
printf("%d",iTotal);
return 0;
}
``1     








