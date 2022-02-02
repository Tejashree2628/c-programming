#include<stdio.h>
#include<stdbool.h>
int Min(int no)
{
  static int min=9;
  int digit=0;
  if(no!=0)
  {
    digit=no%10;
    if(min>digit)
    {
      min=digit;
    }
    no=no/10;
    Min(no);
  }
  return min;
}

int main()
{
    int iValue=0;
    int iret=0;
		printf("enter the number\t");
		scanf("%d",&iValue);		
      	iret=Min(iValue);
         printf("minimum digit is:\t%d\n",iret);
}
