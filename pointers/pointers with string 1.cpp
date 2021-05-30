#include <bits/stdc++.h>
using namespace std;

void print(char c[])
{
    int i=0;
    while( c[i] != '\0' )
    {
        printf(" %d %c", c+i, c[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    char c[] = "Hello";
    print(c);
}

