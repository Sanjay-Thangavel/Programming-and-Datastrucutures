#include<stdio.h>
int main()
{
      int i,j,k,l;
      for(l=1;l<=1000;l++)
      for(k=1;k<l;k++)
      for(j=1;j<k;j++)
      for(i=1;i<j;i++)
      {
            if((i+j+k)==l)
            printf("%d+%d+%d=%d \n",i,j,k,l);
       }
       return 0;
}
