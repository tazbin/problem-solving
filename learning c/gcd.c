#include <stdio.h>

int main()
{
    int a, b;
    // assum a is smaller * b is greater
    scanf("%d %d", &a, &b);
    int gcd, t;

    if(a == 0 || b == 0)
    {
        gcd = 0;
    } else
    {
        while(a!=0){
            t = a;
            a = b%a;
            b = t;
        }
        gcd = b;
    }

    printf("%d", gcd);


    return 0;
}
