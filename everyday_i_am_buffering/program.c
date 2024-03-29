#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define BUZZ_SIZE 1024

void secretFunction()
{
    char buff[BUZZ_SIZE];
    FILE *f = fopen("/root/ctf1/flag.txt", "r");
    fgets(buff, BUZZ_SIZE, f);
    printf("String read: %s\n", buff);
}
void buffering()
{
    printf("I'm Buffering!\n");
}

char *toLower(char *str, size_t len)
{
    char *str_l = calloc(len+1, sizeof(char));

    for (size_t i = 0; i < len; ++i) {
        str_l[i] = tolower((unsigned char)str[i]);
    }
    return str_l;
}

void amIBuffering(char *lower)
{
    if (strcmp(lower, "monday") == 0) 
    {
        buffering();
    } 
    else if (strcmp(lower, "tuesday") == 0)
    {
        buffering();
    }
    else if (strcmp(lower, "wednesday") == 0)
    {
        buffering();
    }
    else if (strcmp(lower, "thursday") == 0)
    {
        buffering();
    }
    else if (strcmp(lower, "friday") == 0)
    {
        buffering();
    }
    else if (strcmp(lower, "saturday") == 0)
    {
        buffering();
    }
    else if (strcmp(lower, "sunday") == 0)
    {
        buffering();
    }
    else 
    {
        printf("Not today...\n");
    }
}

int main()
{
    char str1[43], result[43];
    printf("Enter a day to find out if am I buffering?\n");
    scanf("%s", str1);

    size_t len = strlen(str1);
    char *lower = toLower(str1, len);

    amIBuffering(lower);
}
