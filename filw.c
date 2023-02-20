#include<stdio.h>
#include<stdlib.h>
int main (){

FILE *FP;
FP=fopen("data.txt","w+");
fprintf(FP,"%s %s %d","we","are",1);
fclose(FP);


}
