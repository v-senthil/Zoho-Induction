#include <unistd.h>
#include<stdlib.h>
#include<stdio.h>
void main()
{
    char str[11]="HAPPYPONGAL";
    int i,j;
    for(i=0;i<11;i++)
    {
       system("clear");
       for(j=0;j<i+1;j++)
       {
          printf("%c \n", str[j]);
          usleep(1000000);
       }
    }
}
