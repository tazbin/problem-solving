#include <stdio.h>

int fibbonaccy(int n)
{
    if(n <= 1){
        return n;
    }
    return ( fibbonaccy(n-1) + fibbonaccy(n-2) );
}

int main()
{
    int n = 4;
    int f = fibbonaccy(n);
    printf("%d\n", f);

    return 0;
}
