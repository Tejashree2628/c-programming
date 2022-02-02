#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

int CountON(UNIT iNo)
{
 
  int Count=0; 
  UNIT iResult=0;
  UNIT iMask=0x00000001;
  
 while(iMask != 0x0)
  {
    iResult= iNo&iMask;
     if(iResult==iMask)
    {
       Count++;
    }
      iMask=iMask<<1;
    iResult=0;
  }
   return Count;
}

int main()
{
 UNIT iValue=0;
 int bRet=0 ;
 printf("enter number");
 scanf("%d",&iValue);
 bRet=CountON(iValue);
printf("the count of ON bit is \t %d",bRet); 
return 0;
}