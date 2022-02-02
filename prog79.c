#include<stdio.h>
void Swap(char *ch1,char *ch2)
{
   char temp;
   
   temp=*ch1;
   *ch1=*ch2;
    *ch2=temp;
}

int main()
{
  char ch1,ch2;
  printf("enter first character");
  scanf("%c",&ch1);
  printf("enter second character");
  scanf(" %c",&ch2);
  Swap(&ch1,&ch2);
  printf("after swapping character %c and %c",ch1,ch2);
  return 0;
}