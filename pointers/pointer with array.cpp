#include <bits/stdc++.h>
using namespace std;

void ddd(int a[], int s)
{
    for(int i=0; i<s; i++)
    {
        a[i] = 2*a[i];
    }
}

int main()
{
    int a[5] = {1,2,3,4,5};
    int s = sizeof(a)/sizeof(a[0]);
    ddd(a, s);
    for(int i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
}
