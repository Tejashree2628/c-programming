#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

void CommonON(UNIT iNo1,UNIT ino2)
{
 
  int i=0; 
  UNIT iResult=0;
  UNIT iMask=0x00000001;
  UNIT Temp=iNo1&ino2;
  printf("the common ONbit are:\t");
 for(i=1;i<=32;i++)
  {
    iResult= Temp&iMask;
     if(iResult==iMask)
    {
       printf("%d\t",i);
    }
      iMask=iMask<<1;
    iResult=0;
  }
}

int main()
{
 UNIT iValue1=0,iValue2=0;
 printf("enter first number");
 scanf("%d",&iValue1);
 printf("enter second number");
 scanf("%d",&iValue2);
 CommonON(iValue1,iValue2);
return 0;
}