#include<stdio.h>

int ChkChar(char *brr,char ch)
{
   int Count=0;
   if(brr == NULL)
   {
      return -1;
   }
   while(*brr!='\0')
   {
     if(*brr == ch)
     {
        Count++;
     }
    brr++;
    }
    return Count;
}

int main()
{
   int iCnt=0;
char arr[50];
char ch='\0';
printf("enter your string\n");
scanf("%[^'\n']s",arr);
printf("enter the character");
scanf(" %c",&ch); // IMP space
iCnt = ChkChar(arr,ch);
if(iCnt>0)
{
   printf("the count of character is %d",iCnt);
}
else
{
   printf("character is absent in string");
}
 return 0;
}