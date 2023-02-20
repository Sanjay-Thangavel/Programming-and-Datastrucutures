#include<stdio.h>
struct allowance{
	float dearness;
	float house_rent;
};
struct salary{
	char department[30];
	float basic_pay;
	struct allowance percent;
	char city[20];
};
 int main(){
	struct salary s1;
	float total_pay;
	printf("Enter The Department Basic-Pay and City:\n");
	scanf("%s %f %s",&s1.department,&s1.basic_pay,&s1.city);
	printf("\nDepartment:%s \nBasic Pay:%.2f \nCity:%s",s1.department,s1.basic_pay,s1.city);
	s1.percent.dearness=0.8;
	s1.percent.house_rent=0.6;
	total_pay=s1.basic_pay+s1.basic_pay*s1.percent.dearness+s1.basic_pay*s1.percent.house_rent;
	printf("\nTotal-Pay:%.2f",total_pay);
 }
