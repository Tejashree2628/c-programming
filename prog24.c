#include<stdio.h>	
int perfect(int);							
 int main()
 {
     int iNo=0;
     int iresult=0;     
     printf("enter the number\n");
     scanf("%d",&iNo);

      iresult=perfect(iNo);
	 if(iresult==iNo)
	  { 
           printf("the no is perfect number\n");
	  }
	  else
	  { 
        printf("the no is not perfect number");
	  }
	  

	return 0;
 }

int perfect(int ivalue)
{
 
int icnt=1;
int isum=0;
 if(ivalue<0)
 {
	 ivalue=-ivalue;
 }
while(icnt<ivalue)
{
  if((ivalue%icnt)==0)
  {
	  isum=isum+icnt;	  
  }
   icnt++;
}	
  return isum;
}