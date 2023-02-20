#include <stdio.h>

int fact(int);

void main()
{
 int n,r,ncr;

  	printf("Enter a number n\n");
  	scanf("%d",&n);
 printf("Enter a number r\n");
  	scanf("%d",&r);
  	ncr=fact(n)/(fact(r)*fact(n-r));
    printf("Value of %dC%d = %d\n",n,r,ncr);
}

int fact(int n)
{

   if(n==0)
      return(1);


   return(n*fact(n-1));
}
