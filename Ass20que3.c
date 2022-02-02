#include <stdio.h>
#include<stdbool.h>

bool ChkNum(char ch)
{
    if((ch>='0') &&(ch<='9')) 
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
    char ch='\0';
    bool iRet=false;
    printf("enter the character");
    scanf("%c",&ch);
    iRet=ChkNum(ch);
    if(iRet==true)
    {
        printf("it is an digit");
    }
    else
    {
        printf("it is not a digit");
    }
    return 0;
}
