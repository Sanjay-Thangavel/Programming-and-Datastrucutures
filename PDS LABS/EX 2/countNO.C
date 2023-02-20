#include <stdio.h>
int main (){
int a,b,_1=0,_2=0,_3=0,_4=0,_5=0,_6=0,_7=0,_8=0,_9=0;

while(1) {
printf("\n enter the number\n" );
scanf("%d",&a);
    switch(a){
case 1:
    _1++;
break;
case 2:
    _2++;break;
case 3:
    _3++;break;
case 4:
    _4++;break;
case 5:
    _5++;break;
case 6:
    _6++;break;
case 7:
    _7++;break;
case 8:
    _8++;break;
case 9:
    _9++;break;

 case 'E':break;
    }
    if(a==10)
    break;
}
printf("1=%d 2=%d 3=%d 4=%d 5=%d 6=%d 7=%d 8=%d 9=%d ",_1,_2,_3,_4,_5,_6,_7,_8,_9);
}
