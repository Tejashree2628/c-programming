#include<stdio.h>
#include<stdlib.h>
int Lastindex(int brr[],int iSize,int ino)
{ 
   int i=0,icnt=-1;
   for(i=0;i<iSize;i++)
   {
     if(brr[i]==ino)
     {
       icnt=i;
     } 
   }
    return icnt;   
}
int main()
{ 
 int *arr=NULL,i=0,Size=0,ino=0,ians=0;
 printf("enter number of element\n");
 scanf("%d",&Size);
 arr=(int*)malloc(Size*sizeof(int)); 
 printf("enter the elements\n");
 for(i=0;i<Size;i++)
   {
      scanf("%d",&arr[i]);
   } 
   printf("enter the number to search the index of that number\n");
   scanf("%d",&ino);
 ians=Lastindex(arr,Size,ino);
 if(ians==-1)
 printf("number is not present");
 else
 {
   printf("number is present at%d",ians);
 }
 free(arr);
 return 0;
}
