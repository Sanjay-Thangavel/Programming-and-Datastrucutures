#include<stdio.h>
int main () {
    int i,arr[10];
    int n=0,sum=0,avg=0,n1=0,i1=0;
    printf("enter numbers of elements\t");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("enter element %d \n",i+1);
        scanf("%d",&arr[i]);
    }
FILE *FE,*FO;
FE=fopen("even.txt","w");
FO=fopen("odd.txt","w");
//fprintf(FE,"even numbers are \n");
//fprintf(FO,"Odd numbers are \n");

for (i=0;i<n;i++){
        if (i%2==0)
            fprintf(FE,"%d\n",i);
        else
            fprintf(FO,"%d \n",i);
}
fclose(FE);
fclose(FO);
FE=fopen("even.txt","r");
  while(fscanf(FE, "%d", &n1) != EOF){

   sum += n;
   i1++;
      avg = (sum / i1);
}
printf("The average EVEN is %d.\n", avg);
fclose(FE);

FE=fopen("odd.txt","r");
  while(fscanf(FO, "%d", &n) != EOF){

   sum += n;
   i++;
      avg = (sum / i);
}
printf("The average ODD is %d.\n", avg);
fclose(FO);


}
