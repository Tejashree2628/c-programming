#include<stdio.h>
#include<stdbool.h>
int WhiteSpace(char * str)
{


}

int main()
{
    int iValue=0;
    bool iret=false;
		printf("enter the number\t");
		scanf("%d",&iValue);		
      	iret=ChkPalindrom(iValue);
          if(iret == true)
          {       
        printf("number is palindrom");
          }
          else
       {
         printf("number is not palindrom");
       } 
}
