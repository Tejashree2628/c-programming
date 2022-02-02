#include<stdio.h>
#include<stdbool.h>
int Max(int no)
{
  static int max=0;
  int digit=0;
  if(no!=0)
  {
    digit=no%10;
    if(max<digit)
    {
      max=digit;
    }
    no=no/10;
    Max(no);
  }
  return max;
}

int main()
{
    int iValue=0;
    int iret=0;
		printf("enter the number\t");
		scanf("%d",&iValue);		
      	iret=Max(iValue);
         printf("maximum digit is is:\t%d\n",iret);
}
