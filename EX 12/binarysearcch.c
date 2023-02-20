#include<stdio.h>

#include<stdlib.h>

#define size 100

struct students{

    int roll;

    char *name;

    char *dob;

};



void binary_search(struct students * arr,int beg,int end,int roll){

    int mid;

    while(beg<=end){


        mid=(beg+end)/2;

        if(arr[mid].roll==roll){

            printf("The student details are:\nROLLNO:%d\nNAME:%s\nDOB:%s\n",arr[mid].roll,arr[mid].name,arr[mid].dob);

            return;}

        else if(arr[mid].roll<roll)

            beg=mid+1;

        else

            end=mid-1;

    }

    printf("No such Student.\n");

}



int main(){

    int n;

    printf("Enter the number of students:");

    scanf("%d",&n);

    struct students s[n];

    for(int i=0;i<n;i++){

    printf("Enter the student details\n");

    scanf("%d",&s[i].roll);

    s[i].name=(char *)malloc(size*sizeof(char));

    s[i].dob=(char *)malloc(size*sizeof(char));

    scanf("\n%[^\n]",s[i].name);

    scanf("\n%[^\n]",s[i].dob);

    }

    int roll;

    printf("Enter -1 to end or else continue searching!.\n");

    printf("Enter the roll no to search:");

    scanf("%d",&roll);

    while(roll!=-1){

    binary_search(s,0,n-1,roll);

    printf("Enter the roll no to search:");

    scanf("%d",&roll);

    }

    return 0;

}
