#include <stdio.h>

int f[51];

int calFibo(int n)
{
    if(f[n] != -1)
    {
        return f[n];
    }

    f[n] = calFibo(n-1) + calFibo(n-2);
    return f[n];
}

int main()
{
    int n;
    scanf("%d", &n);
    f[1] = 0;
    f[2] = 1;
    for(int i=3; i<51; i++)
    {
        f[i] = -1;
    }

    int fibo = calFibo(n);
    printf("%d\n", fibo);

    return 0;
}
