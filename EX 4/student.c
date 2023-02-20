#include<stdio.h>
#include<string.h>
union stud{
	char name[20];
	int roll;
	int mark;
};
main(){
	union stud s1;
	strcpy(s1.name,"latha d");
	printf("Student Name:%s",s1.name);
	s1.roll=107;
	printf("\nRoll No:%d",s1.roll);
	s1.mark=97;
	printf("\nMarks:%d",s1.mark);
}
