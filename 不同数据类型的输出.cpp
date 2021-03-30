#include<stdio.h>
int main()
{
  int i=30122121;
  long i2=309095024l;
  short i3=30;
  unsigned i4=2123453;
  printf("%d,%o,%x,%X,%ld,%hd,%u\n",i,i,i,i,i2,i3,i4);//%ldÊä³ölong int£»%hdÊä³öshort int; 
  printf("%d,%ld\n",i,i2);
  printf("%hd,%hd\n\n\n",i,i3);
  char ch1='d';
  unsigned char ch2=160;
  char *str="hello world";
  printf("%c,%u,%s\n\n\n",ch1,ch2,str);
  return 0;
  	 
 } 
