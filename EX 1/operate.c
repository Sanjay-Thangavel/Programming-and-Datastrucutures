#include <stdio.h>
int main() {
int a,b;

int sum,dif,pro,div,rem;
printf("\t Enter a  and b");
scanf("%d %d",&a,&b);
sum=a+b;
dif=a-b;
pro=a*b;
div=a/b;
rem=a%b;
printf("the solutions \n sum %d \n difference %d \n product %d \n division %d\n remainder %d :",sum,dif,pro,div,rem);

return 0;

}
