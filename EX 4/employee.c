#include<stdio.h>
struct employee{
	int number;
	char name[30];
	float pay;
	char date_of_joining[10];
};
struct employee update(struct employee);
main(){
	int i;
	struct employee emp[3]={{2,"rahim ",1500,"12-Sep-2011"},{8,"jawahar",4500,"27-Oct-2014"},{11,"Reeta",5200,"26-Feb-2010"}};
    for(i=0;i<3;i++){
		emp[i]=update(emp[i]);
    }
	for(i=0;i<sizeof(emp)/sizeof(struct employee);i++){
    	printf("Employee:%d\nNumber:%d\nName:%s\nPay:%f\nDate Of Joining:%s\n\n",i+1,emp[i].number,emp[i].name,emp[i].pay,emp[i].date_of_joining);
	}
return 0;
}
struct employee update(struct employee s1){
		if(s1.pay<=2000){
			s1.pay+=s1.pay*0.15;
		}else if(s1.pay<=5000){
			s1.pay=(float)(s1.pay*0.1)+s1.pay;
		}
		return s1;

}
