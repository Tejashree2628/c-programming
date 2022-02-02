#include<stdio.h>
#include<stdbool.h>  // for bool data type
	
int factorial(int);				
			

 int main()
 {
     int iNo=0;
     int bret=0;
     printf("enter the number\n");
     scanf("%d",&iNo);

      bret=factorial(iNo);
      printf("factorial is %d\n",bret);	
	return 0;
 
 }

int factorial(int ivalue)
{
 int fact=1;
 int icnt=1;
while(icnt<=ivalue)
{
  fact=fact*icnt;
    icnt++;
}
	
return fact;	
}