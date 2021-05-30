#include <stdio.h>

void doubleArr(int a[], int size)
{
    for(int i=0; i<size; i++)
    {
        a[i] = a[i]*2;
    }
}

int main()
{
    int a[] = {2,4,5,7,7,9};
    int size = sizeof(a)/sizeof(a[0]);

    doubleArr(a, size);


    for(int i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
}
