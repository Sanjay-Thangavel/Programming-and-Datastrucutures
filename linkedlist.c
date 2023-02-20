#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *start=NULL;

void insert_at_beg()
{
struct node *t;
t=(struct node *)malloc(sizeof(struct node));
printf("Enter the element to be inserted:");
scanf("%d",&t->data);
t->next=start;
start=t;
}
void insert_at_end()
{
struct node *temp=start;
struct node *t=(struct node *)malloc(sizeof(struct node));
printf("\nEnter the data to be inserted:");
scanf("%d",&t->data);
t->next=NULL;
if(start==NULL)
{
start=t;
return;
}
while(temp->next!=NULL)
temp=temp->next;

temp->next=t;
}

void insert_at_middle()
{
    int x;
    struct node *temp=start;
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    printf("entre the element after which is to be inserted :");
    scanf("%d",&x);
    while((temp->data!=x)&&(temp->next!=NULL)){
        temp=temp->next;
    }
    if (temp->data!=x)
        printf("no element found :");
    printf("entre the element to insert : ");
    scanf("%d",&t->data);
    t->next=temp->next;
    temp->next=t;


}
void display()
{
struct node *temp=start;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
void delete_at_begin()
{
struct node *temp=start ;
if(start==NULL)
{
printf("\nLinked list is empty");
return;
}
start=start->next;
free(temp);
}
void delete_at_middle(){

struct node *cur=start;
struct node *prev=start;
int x;
printf("entre NO. to delete : ");
scanf("%d",&x);
if (start==NULL){
    printf("empty list");
    return ;
}
if(start->data==x){
    delete_at_begin();
    return;
}
while((cur->data!=x)&&(cur != NULL)){
    prev=cur;
    cur=cur->next;
}
if (cur->data!=x)
    printf("no element found .. ");
prev->next=cur->next;
free(cur);
}
void delete_at_end(){
struct node *prev=start;
struct node *cur=start;
int x;
if (start==NULL) {
    printf("empty list");
    return ;
}
if(start->next==NULL){
         free(start);
start=NULL;
return ;
    }


while(cur->next!=NULL){
    prev=cur;
    cur=cur->next;
}
prev->next=NULL;
free(cur);

}
void find(){
    int s;
    int is_found = 0;
    struct node *temp=start;
    printf("entre an element  :to check   ");
    scanf("%d",&s);
    while(temp->next!=NULL){
        if (temp->data==s) {
            is_found = 1;
            break;
        }
        temp=temp->next;
    }
    if(is_found)
        printf("FOUND\n");
    else
        printf("NOT FOUND\n");
}




int main (){
    int ch;
do {
printf("\n1.Insert at beginning\n2.Insert in the middle\n3.Insert at the end");
printf("\n4.Deletion at the beginning\n5.Deletion in the middle\n6.Deletion at the end");
printf("\n7.Display\n8.Find\n9.Exit");
printf("\nEnter the choice :  ");
scanf("%d",&ch);
switch(ch){

case 1 :
    insert_at_beg();
    break;
case 2 :
    insert_at_middle();
    break;
case 3:
    insert_at_end();
    break;
case 4 :
    delete_at_begin();
    break;
case 5 :
    delete_at_middle();

    break;
case 6 :
    delete_at_end();
    break;

case 7 :
    display();
    break;

case 8 :
    find();
    break;


case 9:
    exit (1);
    break;



}


}while(ch!=9);


}
