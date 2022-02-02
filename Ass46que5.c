#include<stdio.h>
#include<stdbool.h>
int Reverse(int no)
{
  static int Rev=0;
  int digit=0;
  if(no!=0)
  {
    digit=no%10;
    Rev=(Rev*10)+digit;
    no=no/10;
    Reverse(no);
  }
  return Rev;
}

int main()
{
    int iValue=0;
    int iret=0;
		printf("enter the number\t");
		scanf("%d",&iValue);		
      	iret=Reverse(iValue);
         printf("Reverse number is:\t%d\n",iret);
}
