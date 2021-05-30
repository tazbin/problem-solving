#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 12;
    int *p;


    p = &a;
    *p = 10;

    printf("%d\n", *p);
    printf("Value of a is: %d\n", a);


    /*
    *p = a;
    printf("%d %d %d\n", p, &p, *p);
    */
}
