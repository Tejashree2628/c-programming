#include<stdio.h>
int Reverse(int iNo)
{
int iRev=0,value=0;

   if(iNo<0)
    {  iNo=-iNo;   }
    
    	while(iNo>0)
     	{
		
        	value=iNo%10;
             iRev=(iRev*10)+value;
		     iNo=iNo/10;
		
	    }
          return iRev;
}

int main()
{
    int iValue=0,iret=0;
		printf("enter the number\t");
		scanf("%d",&iValue);		
      	iret=Reverse(iValue);       
        printf("%d",iret);
}