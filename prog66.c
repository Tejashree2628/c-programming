
#include<stdio.h>
#include<stdlib.h>
 typedef unsigned int UINT;
 
 UINT ToogleBit(UINT no)
 {
    UINT imask=0x00000008,iresult=0;
    iresult=no & imask;
    if(iresult==imask)
    {
            printf("bit is on");
            return iresult;
    }
     else
     {
             iresult=no|imask;
           return iresult;
     }
 }
 
 int main()
 {
        UINT ino=0,ians=0; 
         printf("enter the number");
         scanf("%d",&ino);
         ians=ToogleBit(ino);
       printf("%d updates number",ians);
       return 0;
 }