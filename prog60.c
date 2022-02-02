#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Checkno(int brr[],int iSize,int ino)
{ 
   int i=0;
   for(i=0;i<iSize;i++)
   {
     if(brr[i]==ino)
     {
       return true;
     } 
   }
   return false;
}
int main()
{ 
 int *arr=NULL,i=0,Size=0,ino=0;
 bool ians=false;
 printf("enter number of element\n");
 scanf("%d",&Size);
 arr=(int*)malloc(Size*sizeof(int)); 
 printf("enter the elements\n");
 for(i=0;i<Size;i++)
   {
      scanf("%d",&arr[i]);
   } 
   printf("enter number of element\n");
   scanf("%d",&ino);
 ians=Checkno(arr,Size,ino);
 if(ians==true)
 {  
 printf("number is present");
 }
 else
 {
   printf("number is not present");
 }
 free(arr);
 return 0;
}
