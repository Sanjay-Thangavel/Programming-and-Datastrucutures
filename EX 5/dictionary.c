#include<stdio.h>

struct dict{
    char word[30];
    char noun[30];
    char meaning[60];
    int no;

}a[5];

int main (){
     int i;
     char name[30];
    strcpy(a[0].word,"Accept");
    strcpy(a[0].noun,"Acceptance");
    strcpy(a[0].meaning ,"Agreeing with");
    a[0].no=1;
     strcpy(a[1].word,"belief");
     strcpy(a[1].noun,"believable");
     strcpy(a[1].meaning ,"making trust");
      a[1].no=2;
     strcpy(a[2].word,"Act");
     strcpy(a[2].noun,"Act");
     strcpy(a[2].meaning ,"action");
      a[2].no=3;
     strcpy(a[3].word,"clear");
     strcpy(a[3].noun,"clearity");
     strcpy(a[3].meaning ,"understood");
      a[3].no=4;
     strcpy(a[4].word,"confuse");
     strcpy(a[4].noun,"confusion");
     strcpy(a[4].meaning ,"collapesed state ");
   a[4].no=3;
   printf("Enter the word in dictionary; to find\n");
   scanf("%s",name);
   for (i=0;i<5;i++){
    if (strcmp(a[i].word,name)==0){
        printf("\t The S.NO :%d \n \t Word : %s \n \t Noun form :%s \n \t Meaning is :%s\n",a[i].no,a[i].word,a[i].noun,a[i].meaning);
    }
   }
    }

