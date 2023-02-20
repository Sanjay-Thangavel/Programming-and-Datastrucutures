#include<stdio.h>
#include<string.h>
int main () {
    int i,c=0,vowels=0,space=0;
    char line[70];
    printf("enter the semtence");
    gets(line);
    printf("%s \n ",line);
    for (i=0;i<strlen(line);i++){
            if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U') {
            ++vowels;
        } else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            ++c;

        } else if (line[i] == ' ') {
            ++space;
        }
    }
printf("the number of vowels %d \n number of  consanents %d \n number of  spaces %d  ",vowels,c,space);
    }

