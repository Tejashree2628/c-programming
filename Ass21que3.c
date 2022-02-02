#include <stdio.h>

void DisplayAll(char ch)
{   
   char iCnt='\0';
    if((ch>='a') && (ch<='z')) 
    {
        for(iCnt=ch;iCnt>='a';iCnt--)
        {
           printf("%c\t",iCnt);
        }
    }
    else if((ch>='A') && (ch<='Z')) 
    {
        for(iCnt=ch;iCnt<='Z';iCnt++)
        {
            printf("%c\t",iCnt);
        }
    }
    
}
int main()
{
    char ch='\0';
    printf("enter the character");
    scanf("%c",&ch);
    DisplayAll(ch);
    return 0;
}
