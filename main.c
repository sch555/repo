#include <stdio.h>
#include "askname.h"

int main(int arcg, char **argv)
{
char first[255], last[255];
askname(first, last);

printf("Hello, %s %s\n", first, last);
return 0;
}






#include <stdio.h>
#include <string.h>

int main(int arcg, char **argv)
{
<<<<<<< HEAD

char first[255], last[255];
char

printf("Enter your first name: ");
fgets(first, 255, stdin);
first [strlen(name)-1] = '\0'; /* remove the newline at the end */

printf("Now enter your last name: ");
gets(last); /* buffer overflow*/

printf("Hello %s %s!\n", first, last);
=======
char first[255], last[255];
float

printf("Enter your first name: ");
fgets(first, 255, stdin);
first[strlen(first)-1] = '\0'; /* remove the newline at the end */

printf("Now enter your last name: ");
gets(last); /* buffer overflow? what's that? */

printf("Hello, %s %s!\n", first, last);
>>>>>>> lastname
return 0;
}