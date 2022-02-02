#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
int fd=0,iret=0,ians=0;
char fname[20],buffer[10];
printf("enter the name of file");
scanf("%s",fname);

fd=open(fname,O_RDONLY);
if(fd==-1)
{
   printf("unable to open");
   return-1;
}
while((iret=read(fd,buffer,10))!=0)
{
   ians=ians+iret;
}
printf("the size of file is\t:%d bytes\n",ians);
}