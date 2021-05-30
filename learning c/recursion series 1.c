#include <stdio.h>

int calNthNumber(int n, int a, int b, int c)
{
    if(n == 1){
        return a;
    } else if(n == 2){
        return b;
    } else if(n == 3){
        return c;
    }

    return calNthNumber(n-1, a, b, c) + calNthNumber(n-2, a, b, c) + calNthNumber(n-3, a, b, c);

}

int main()
{
    int n;
    int a, b, c;
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);

    int result = calNthNumber(n, a, b, c);

    printf("%d\n", result);
    return 0;
}
