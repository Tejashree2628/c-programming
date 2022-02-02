#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int CountSmall(char fname[])
{
    int fd=0,iret=0,icnt=0,i=0;
    char buffer[10];
    fd=open(fname,O_RDONLY);
   if(fd==-1)
  {
   printf("unable to open");
   return-1; 
  } 
    while((iret=read(fd,buffer,10))!=0)
   {
     for(i=0;i<iret;i++)
     {
        if((buffer[i]>='a') && (buffer[i]<='z'))
        {
           icnt++;
        }
     }
   }
   close(fd);
  return icnt;
}

int main()
{
int ians=0;
char fname[20];
printf("enter the name of file");
scanf("%s",fname);

ians=CountSmall(fname);

printf("the count of small letter is: %d\n",ians);

}