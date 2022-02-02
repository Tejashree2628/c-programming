#include<stdio.h>
#include<stdlib.h>
int Evencount(int brr[],int iSize)
{ 
   int i=0,icnt=0;
   for(i=0;i<iSize;i++)
   {
     if((brr[i]%2)==0)
       icnt++;
   }
     return icnt;
} 
int main()
{ 
 int *arr=NULL,ians=0,i=0,Size=0;
 printf("enter number of element\n");
 scanf("%d",&Size);
 arr=(int*)malloc(Size*sizeof(int)); 
 printf("enter the elements\n");
 for(i=0;i<Size;i++)
   {
      scanf("%d",&arr[i]);
   } 
   ians=Evencount(arr,Size);  
 printf("count of even no is:%d",ians);
 free(arr);
 return 0;
}
