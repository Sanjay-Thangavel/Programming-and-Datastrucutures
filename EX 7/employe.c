#include<stdio.h>
#include<stdlib.h>
typedef struct emp_linked_list{
	int emp_id;
	char name[50];
	float pay;
	struct emp_linked_list *next;
}EMP;

typedef struct emp_linked_list * LL;
LL start=NULL;

void display(){
if(start==NULL)printf("There are no employee details right now.\n");
else {printf("The employee details are:\n");
LL node=(LL)malloc(sizeof(EMP));
node=start;
while(node!=NULL){
printf("ID:%d\tNAME:%s\tPAY:%f\n",node->emp_id,node->name,node->pay);
node=node->next;
}}
}

void insert_beg(){
LL node=(LL)malloc(sizeof(EMP));
printf("Enter the employee details in the order: \nID\nNAME\nPAY\n");
scanf("%d\n%[^\n]%f",&node->emp_id,node->name,&node->pay);
node->next=start;
start=node;
}

void insert_mid(){
if(start==NULL){insert_beg();return;}
LL temp=start;
LL node;
printf("Enter the employee id after which the new employee details have to be inserted:");
int id;
scanf("%d",&id);
while(temp->emp_id!=id && temp->next!=NULL)temp=temp->next;
if(temp->emp_id!=id){printf("There is no employee with that id\n");return;}
node=(LL)malloc(sizeof(EMP));
printf("Enter the employee details in the order: \nID\nNAME\nPAY\n");
scanf("%d\n%[^\n]%f",&node->emp_id,node->name,&node->pay);
node->next=temp->next;
temp->next=node;
}

void insert_end(){
if(start==NULL){insert_beg();return;}
LL node=(LL)malloc(sizeof(EMP));
printf("Enter the employee details in the order: \nID\nNAME\nPAY\n");
scanf("%d\n%[^\n]%f",&node->emp_id,node->name,&node->pay);
LL temp=start;
while(temp->next!=NULL)
temp=temp->next;
node->next=NULL;
temp->next=node;
}

void delete_beg(){
if(start==NULL){printf("There are no employees now.\n");return;}
LL temp=start;
start=temp->next;
free(temp);
}

void delete_mid(){
LL prev,cur=start;
if(start==NULL){printf("There are no employees now.\n");return;}
int id;
printf("Enter the employee id:");scanf("%d",&id);
if(start->emp_id==id){delete_beg();return;}
while(cur->emp_id!=id && cur->next!=NULL){prev=cur;cur=cur->next;}
if(cur->emp_id!=id){printf("There is no employee with that id.\n");return;}
prev->next=cur->next;
free(cur);
}

void delete_end(){
if(start==NULL){printf("There are no employees now.\n");return;}
LL prev,cur=start;
if(cur->next==NULL){delete_beg();return;}
while(cur->next!=NULL){prev=cur;cur=cur->next;}
prev->next=NULL;
free(cur);
}

void emp_details_emp_id(){
if(start==NULL){printf("There are no employees right now.\n");return;}
int id;
printf("Enter the employee id:");
scanf("%d",&id);
LL temp=start;
while(temp->emp_id!=id && temp->next!=NULL)temp=temp->next;
if(temp->emp_id!=id){printf("There is no detail about the employee with that id.\n");return;}
printf("The Employee details are:\n");
printf("ID:%d\tNAME:%s\tPAY:%f\n",temp->emp_id,temp->name,temp->pay);
}

void emps_greater_pay(){
if(start==NULL){printf("There are no employees right now.\n");return;}
float pay;int flag=1;
printf("Enter the pay:");
scanf("%f",&pay);
LL temp=start;
while(temp!=NULL){
if(temp->pay>pay){printf("ID:%d\tNAME:%s\tPAY:%f\n",temp->emp_id,temp->name,temp->pay);flag=0;}
temp=temp->next;
}
if(flag)printf("There is no employee with pay greater than %f\n",pay);
}

void min_max_pay_emp(){
if(start==NULL){printf("There are currntly no employees now.\n");return;}
LL temp=start;
LL min=(LL)malloc(sizeof(EMP));
LL max=(LL)malloc(sizeof(EMP));
min->pay=100000000;
max->pay=-1;
while(temp!=NULL){
if(temp->pay<min->pay)min=temp;
if(temp->pay>max->pay)max=temp;
temp=temp->next;
}
printf("The employee with minimum pay is ID:%d\tNAME:%s\tPAY:%f\n",min->emp_id,min->name,min->pay);
printf("The employee with maximum pay is ID:%d\tNAME:%s\tPAY:%f\n",max->emp_id,max->name,max->pay);
}

int main(){
	int choice,flag=1;
	do{
		printf("*****MENU*****\n1. INSERT AT BEGINNING\n2. INSERT AT MIDDLE\n3. INSERT AT END\n4. DELETE AT BEGINNING\n5. DELETE AT MIDDLE\n6. DELETE AT END\n7. DISPLAY ALL EMPLOYEE DETAILS\n8. FIND EMPLOYEE BY EMPLOYEE ID\n9. EMPLOYEE DETAILS HIGHER THAN GIVEN PAY\n10. EMPLOYEE DETAILS OF MAXIMUM AND MINIMUM PAY\n11. EXIT\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insert_beg();
				break;
			case 2:
				insert_mid();
				break;
			case 3:
				insert_end();
				break;
			case 4:
				delete_beg();
				break;
			case 5:
				delete_mid();
				break;
			case 6:
				delete_end();
				break;
			case 7:
				display();
				break;
			case 8:
				emp_details_emp_id();
				break;
			case 9:
				emps_greater_pay();
				break;
			case 10:
				min_max_pay_emp();
				break;
			case 11:
				flag=0;
				break;
			default :
				printf("Invalid Choice\n");
				break;
		}
	}while(flag);
	return 0;
}
