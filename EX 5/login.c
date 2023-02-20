#include <stdio.h>

#include <string.h>

void login(){

    {

char id[50];

User:

printf("Enter your id:\n");

scanf("%s", &id);

if (strcmp(id,"admin")==0)

{

printf("Id is correct\n");

}

else

{

printf("You have enetred an INVALID  user id \nPlease enter ID again...\n");

goto User;

}

char pass[50];

pass:

printf("Enter your password: ");

scanf("%s", &pass);

if(strcmp(pass,"admin123")==0)

{

printf("You have successly loged in into To-do list App !..\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

goto pass;

}

return 0;

}


}

