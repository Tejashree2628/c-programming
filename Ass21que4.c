#include <stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{   
   char iCnt='\0';
    if((ch=='!') || (ch=='@') || (ch=='#') || (ch=='$') || (ch=='%') || (ch=='^') || (ch=='&') || (ch=='*')) 
    {
       return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int cRet=0;
    char ch='\0';
    printf("enter the character");
    scanf("%c",&ch);
    cRet=ChkSpecial(ch);
    if(cRet==true)
    {
        printf("it is special character");
    }
    else
    {
        printf("it is not special character");
    }
    return 0;
}
