#include<stdio.h>
int a[50];
int i,size;
void insert(){

printf("enter a number of elemntsd:");
scanf("%d",&size);
printf("enter the %d elements ",size);
for (i=0;i<size;i++){
    scanf("%d",&a[i]);
}
}
void display(){
for (i=0;i<size;i++){
    printf("%d \n ",a[i]);
}
}
void insert_at_middle(){
    int pos,val;
    printf("entre the position of insertion :");
    scanf("%d",&pos);
    printf("entre the value of element");
    scanf("%d",&val);
    for (i=size;i>=pos-1;i--){
        a[i+1]=a[i];
        }
        a[pos-1]=val;
        size++;


}

int main () {
int ch;
do {
printf("1.inserting the elements\n 2.insert at middle \n 8.display \n 9.exit\n \t");
printf("enter your choice :");
scanf("%d",&ch);
switch(ch)
{
case 1:
    insert();
    break;
case 2:
    insert_at_middle();
    break;

case 8:
    display();
    break;
case 9:
    exit (1);
    break;

default :
    printf("INVALID CHOICE");

}


}while(ch!=9);
}
