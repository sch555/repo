#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
   char first[255], last[255];

   printf("Enter your names: ");
   fgets(first, 255, stdin);
   first[strlen(first)-1] = '\0' /* remove the newline at the end */

   printf("Now enter your last name: ");
   gets(last); /* buffer overflow? what's that? */

<<<<<<< HEAD
   printf ("Helloss entersssss yourw firstss name:");
=======
   printf ("Hello enter your first name:");
   printf ("Hello enter yourw firstss name:");
    printf ("Master");
>>>>>>> lastname


   printf("Hello, %s!\n", first, last);
   return 0;
}