# include <stdio.h>
int main ()
{
    int i,a=0,sum=0;
    int arr[20];
    int *p,*su,*num;
    p=&arr[0];
    su=&sum;
    num=&a;
    printf("enter the array N :");
    scanf("%d",&a);
    for(i=0;i<*num;i++)
    {
        printf("entre the element %d \t :",i+1);
        scanf("%d",(p+i));
        *su += *(p+i);

    }printf("avg =sum /number ===>\n %d / %d \t is %d",*su,*num,*su / *num);

}
