#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255];

    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

    printf("No eer your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Helo %s %s!\n", first, last);
    return 0;
}
