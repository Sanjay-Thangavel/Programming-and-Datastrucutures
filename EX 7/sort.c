#include<stdio.h>
#include<stdlib.h>
typedef struct linkedlist{
	int value;
	struct linkedlist * next;
}ll;
typedef ll * LL;
LL start=NULL;

void in(){
int flag=1;
LL node=(LL)malloc(sizeof(ll));
printf("Enter the value:");
scanf("%d",&node->value);
if(start==NULL || start->value>=node->value){node->next=start;start=node;return;}
LL cur=start,prev=start;
while(cur->next!=NULL && cur->next->value < node->value){
cur=cur->next;
}
node->next=cur->next;
cur->next=node;
}

void del(){
int value;
if(start==NULL){printf("There is no element now\n");return;}
printf("Enter the element you want to delete:");
scanf("%d",&value);
LL prev=start,cur=start;
if(cur->value==value){start=cur->next;free(cur);return;}
while(cur->next!=NULL && cur->value!=value){prev=cur;cur=cur->next;}
if(cur->next!=NULL){prev->next=cur->next;free(cur);}
else if(cur->value==value){prev->next=NULL;free(cur);}
else
printf("There is no such element in the linked list\n");
}

void disp(){
if(start==NULL){printf("There is no element now\n");return;}
LL temp=start;int i=1;
while(temp!=NULL){
printf("%d : %d\n",i,temp->value);
i++;
temp=temp->next;
}
}

void search(){
if(start==NULL){printf("There is no element now\n");return;}
LL temp=start;
int value;
printf("Enter the value:");
scanf("%d",&value);
int i=1;int flag=1;
while(temp!=NULL){
if(temp->value==value){printf("The element %d is present at the %d position\n",value,i);flag=0;}
i++;
temp=temp->next;
}
if(flag)printf("The value is not found.\n");
}

int main(){
int flag=1,choice;
do{
printf("*****MENU*****\n1. INSERTION\n2. DELETION\n3. DISPLAY\n4. SEARCH\n5. EXIT\nEnter your choice:");
scanf("%d",&choice);
switch(choice){
			case 1:
                                in();
                                break;
                        case 2:
                                del();
                                break;
                        case 3:
                                disp();
                                break;
                        case 4:
                                search();
                                break;
                        case 5:
                                flag=0;
                                break;
                        default :
                               	printf("Invalid Chocie\n");
                                break;
}
}while(flag);
}
