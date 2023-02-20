#include<stdio.h>
int main()
{
    int a,sum;
printf("enter the units in  number:");
scanf("%d",&a);
if (a>=601)
    sum=320 +((a-600)*1) ;
else if (401<a && a<=600)
     sum=230+((a-400)*0.85);
    else if (201<=a && a<=400)
            sum=100+((a-200)*0.65);
        else
        {

         sum=a*0.50;
        }


printf("the total price is %d",sum);
}
