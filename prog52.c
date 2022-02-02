#include<stdio.h>
#include<stdlib.h>
float average(int brr[],int iSize)
{ 
   int i=0;
   float ians=0.0f;
   for(i=0;i<iSize;i++)
   {
       ians=ians+brr[i];
   }
   ians=ians/iSize;
    return ians;
} 
int main()
{ 
 int *arr=NULL,i=0,Size=0;
 float iAvg=0.0f;
 printf("enter number of element\n");
 scanf("%d",&Size);
 arr=(int*)malloc(Size*sizeof(int)); 
 printf("enter the elements\n");
 for(i=0;i<Size;i++)
   {
      scanf("%d",&arr[i]);
   } 
   iAvg=average(arr,Size);  
 printf("average is:%0.2f",iAvg);
 free(arr);
 return 0;
}