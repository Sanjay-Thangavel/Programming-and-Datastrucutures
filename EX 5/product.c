#include<stdio.h>
#include<string.h>
struct product
{
 char name[20];
 int price;
 int id;

}p[10];
void namesearch(char ch1[20],int n )
{
    int i;
    for (i=0;i<n;i++)
        {
            if(strcmp(p[i].name,ch1)==0){
            printf("the details are \n \t Name: %s \n\tPrice : %d \n \tId :%d \n ",p[i].name,p[i].price,p[i].id);
            }}
}
void idsearch(int d,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        if(p[i].id==d)
        {
        printf("the details are \n \t Name: %s \n\tPrice : %d \n \tId :%d \n ",p[i].name,p[i].price,p[i].id);
        }
    }
}
int main () {
int i,n,ch,lid;
char name1 [20];
printf("enter the number of products : \t ");
scanf("%d",&n);
for (i=0;i<n;i++){
    printf("entre the name of product :\t");
    scanf("%s",p[i].name);
    printf("entre the name of price :\t");
    scanf("%d",&p[i].price);
    printf("entre the id  :\t");
    scanf("%d",&p[i].id);
}
printf("1.search by id:\n 2.search by name: \n ENTER YOUR CHOICE:");
scanf("%d",&ch);
switch(ch)
 {
 case 1:
    printf("enter the id :\t");
    scanf("%d",&lid);
    idsearch(lid,n);
    break;
 case 2:
    printf("enter the name :\t");
    scanf("%s",name1);
    namesearch(name1,n);
    }

 }


