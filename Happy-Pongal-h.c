#include <unistd.h>
#include<stdlib.h>
#include<stdio.h>
void main()
{
   char str[12]="HAPPYPONGAL";
   int i;
   for(i=0;i<12;i++)
   {
      sleep(3);
      printf("%c ", str[i]); 
   }
}
