#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

UNIT ChkBit(UNIT iNo)
{
 
  UNIT iResult=0;
  UNIT iMask=0x99999999;
  iResult= iNo^iMask;
  return iResult;

}

int main()
{
 UNIT iValue=0;
 UNIT iAns=0;
 printf("enter number");
 scanf("%d",&iValue);
 iAns=ChkBit(iValue);
 printf("%d",iAns);

return 0;
}