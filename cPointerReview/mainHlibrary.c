
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void) {
char fname [100], lname[100];

char fullname[100];
printf("Enter your first name");
scanf("%s", fname);
printf("Enter your last name:");
scanf("%s", lname);
printf("The lenght of your first name %lu\n",strlen(fname));




printf("Enter your last name: ");
scanf("%s", lname);
printf("The lenght of your first
Xlu\n", strlen(fname));
if(strcmp(fname, lname)>0)
printf("Your last name comes first
alphabetically\n");

else //means fnmae<lname [strcmp returns
<0]
printf("Your first name comes first
alphabetically\n");
printf("First name %s and Last name -
%s\n", fname, lname);
I
strcat(fname, ");
strcat (fname, lname);
printf("First name %s and Last name -
%s\n", fname, lname);

strcpy(fullname, fname);
printf("Full name is %s\n", fullname);
printf("Enter a string to search within
the full name: ");
char key[50];
scanf("%s", key);
if(strstr(fullname, key) != NULL)
printf("%s\n", strstr(fullname, key));
else
printf("Not found\n");|