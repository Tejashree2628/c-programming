#include<stdio.h>

void DisplayTable(int iNo)
{
    if(iNo==0)
    {
       return;
    }
    
  int iCnt=0;
  for(iCnt=1;iCnt<=10;iCnt++)
  {
     printf("%d\n",(iCnt*iNo));
  }

}
int main()
{
int iValue=0;
printf("enter the number to display the table");
scanf("%d",&iValue);
DisplayTable(iValue);
return 0;
}









