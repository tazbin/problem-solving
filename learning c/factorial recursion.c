#include <stdio.h>

int fectorial(int n)
{
    if(n == 0 | n == 1){
        return 1;
    }
    return n*fectorial(n-1);
}

int main()
{
    int n = 0;
    int fac = fectorial(n);
    printf("%d\n", fac);

    return 0;
}
