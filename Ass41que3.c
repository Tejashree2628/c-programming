#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
int fd=0,iret=0;
char fname[20],buffer[10];
printf("enter the name of file");
scanf("%s",fname);

fd=open(fname,O_RDONLY);
if(fd==-1)
{
   printf("unable to open");
   return-1;
}
printf("content in file are:\n");
while((iret=read(fd,buffer,10))!=0)
{
   write(1,buffer,iret);
}
printf("\n");
}