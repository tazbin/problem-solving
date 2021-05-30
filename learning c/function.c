#include <stdio.h>

int findMax(int ara[], int n)
{
    int max = ara[0];
    for(int i=1; i<n; i++)
    {
        if(max < ara[i])
        {
            max = ara[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int max = findMax(arr, 9);
    printf("%d\n", max);
}
