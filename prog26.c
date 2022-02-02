#include<stdio.h>
void seprate(int iNo)
{
	int ans=0;
	while(iNo>0)
	{
		ans=iNo%10;
		printf("%d",ans);
		iNo=iNo/10;
		
	}

}
	
   int main()
	{
		int iValue=0;
		printf("enter the number");
		scanf("%d",&iValue);		
		seprate(iValue);
		
		return 0;
	}