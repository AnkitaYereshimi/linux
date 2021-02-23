#include<stdio.h>
int main()
{
 it pid;
 pid=fork();
 if(pid==0){
 system("ls -l");
 sleep(10);
 }
 else
 {
  sleep(3);
  }
  return 0;
  }
