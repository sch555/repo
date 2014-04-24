<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

void askname(char *first, char *last)
{
printf("Enter your first name: ");
fgets
first
}
=======
include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
   char first[255], last[255];

   printf("Enter your names: ");
   fgets(first, 255, stdin);
   first[strlen(first)-1] = '\0' /* remove the newline at the end */
>>>>>>> 687a68cc3874fbae95e142f00a972d65d6d9643b
