#include <stdio.h>

int main()
{
    char c = 'w';

    if(c >= 'A' && c <= 'Z')
    {
        printf("%c is UPPERCASE\n", c);
    } else
    {
        printf("%c is lowercase\n", c);
    }

    return 0;
}
