#include<stdio.h>
main(){
	int a[20],n,i,j,temp;
	printf("Array Size:(max.20)");
	scanf("%d",&n);
    printf("Elements:\n");
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++){
    	for(j=i+1;j<n;j++){
    		if(*(a+j)<*(a+i)){
    			temp=*(a+i);
    			*(a+i)=*(a+j);
    			*(a+j)=temp;
			}
		}
	}
	for(i=0;i<n;i++){
    	printf("%d ",*(a+i));
	}
}
