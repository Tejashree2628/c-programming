//using pointer
#include<stdio.h>

int addition(int *brr,int iSize)
{ 
    int i=0,iSum=0;
   for(i=0;i<iSize;i++)
   {
       iSum=iSum+(*brr);
       brr++;
   }
    return iSum;
} 


int main()
{ 
 int arr[7],iRet=0,i=0,Size=0;
 printf("enter number of element\n");
 scanf("%d",&Size);
 printf("enter the numbers\n");
 for(i=0;i<Size;i++)
   {
      scanf("%d",&arr[i]);
   } 
   iRet=addition(arr,Size);    //addition(100); 
 printf("addition is:%d",iRet);
 return 0;
}
