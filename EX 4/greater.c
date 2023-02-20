#include<stdio.h>
     int main() {
	int a , b , *ptr1 , *ptr2;
	printf("Enter 2 numbers:");
	scanf("%d %d",&a,&b);
	ptr1=&a;
	ptr2=&b;
	if(*ptr1>*ptr2){
		printf("%d is Greater",*ptr1);
	}else{
		printf("%d is Greater",*ptr2);
	}
    return 0;
}

