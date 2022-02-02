#include<stdio.h>
#include<stdbool.h>
int CountSmall(char *str)
{
  static int count=0,i=0;
  if(str[i]!='\0')
  {
    if((str[i]>='a') && (str[i]<='z'))
    {
      count++;
    }
    i++;
    CountSmall(str);
  }
  return count;
}

int main()
{
    char str[40];
    int iret=0;
		printf("enter the string\t");
		scanf("%[^'\n']c",str);		
      	iret=CountSmall(str);
         printf("count of small letter is:\t%d\n",iret);
}
