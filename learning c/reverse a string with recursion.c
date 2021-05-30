#include <stdio.h>

void reverse(char *s)
{
    if(*s)
    {
        reverse(s+1);
        printf("%c", *s);
    }
}

int main()
{
    char s[] = "tazbinur";

    reverse(s);
    printf("\n%s\n", s);
}
