#include <stdio.h>

int pow(int x, int y)
{

    if(y==0)
    {
        return 1;
    }

    if(y%2 == 0)
    {
        int t = pow(x, y/2);
        return t*t;
    }

    return pow(x, y-1)*x;
}

int main()
{
    int x = 2, y = 4;
    int result;

    result = pow(x, y);

    int m = 7%3;
    printf("%d\n", m);

    printf("%d\n", result);

    return 0;
}
