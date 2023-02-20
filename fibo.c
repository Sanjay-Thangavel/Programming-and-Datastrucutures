#include<stdio.h>
int main (){
int x;
printf("entre the number :");
scanf("%d",&x);
fibo(x);
//fiborec(x);


}
int fibo(int num){
    int n3;
    int n1=0,n2=1;
    printf("%d %d ",n1,n2);
    for (int i=2;i<num;i++)
        {
            n3=n1+n2;
            printf("%d ",n3);
            n1=n2;
            n2=n3;

    }

}

//int fibo(int )
