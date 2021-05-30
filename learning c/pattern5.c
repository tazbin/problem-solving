#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int total = n+(n-1);

    int a, b, c, d;
    int p = -1;

    for(int i=0; i<total; i++)
    {
        p++;
        a = -1;
        b=0;
        for(int j=0; j<total; j++)
        {
            a++;
            if(a>p){
                a=p;
            }
            if(j<=p){
                d = n-a;
            }
            if(total-p <= j){
                b++;
                d  = n-a+ b;
            }

            printf("%d ",d);

        }
        printf("\n");
    }

    return 0;
}
