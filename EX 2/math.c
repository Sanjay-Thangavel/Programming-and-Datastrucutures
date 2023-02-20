#include <stdio.h>
#include<math.h>
int main() {
    int a,ch;
printf("enter a number \t ");
scanf("%d",&a);
printf("ENTER UR CHOICE: \n1.sin(x),\n 2.cos(x),\n 3.tan(x),\n 4.log(x),\n 5.log10(x),\n 6.sqrt(x). ");
scanf("\n %d",&ch);
printf("the OUTPUT IS DERIVED --->");
switch(ch)
{
case 1:
    printf("sin fn %f",sin(a));
    break;
case 2:
    printf("cos fn %f",cos(a));break;
case 3:
    printf("tan fn %f",tan(a));break;
case 4:
    printf("log fn %f",log(a));break;
case 5:
    printf("log10 %f",log10(a));break;
case 6:
    printf("SQUARE ROOT %f",sqrt(a));break;


}

return 0;
}
