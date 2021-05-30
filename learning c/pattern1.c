#include <stdio.h>

int main()
{
    int n = 7;
    int rev = 0;

    for(int i=0; i< n + (n-1); i++)
    {
        if( i == n)
        {
            rev = 1;
        }

        for(int j=0; j<n; j++)
        {
            if(!rev)
            {
                if( j<= n-i-1)
                {
                    printf("C");
                } else
                {
                    printf(" ");
                }
            } else
            {
                if( j<= i-n+1)
                {
                    printf("C");
                } else
                {
                    printf(" ");
                }
            }


        }
        printf("\n");
    }

    return 0;
}
