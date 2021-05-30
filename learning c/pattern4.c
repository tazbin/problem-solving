#include <stdio.h>

int main()
{
    int n = 30;

    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){

            if(j > i && j < n-i-1){
                printf(" ");
            } else{
                printf("C");
            }

        }

        printf("\n");

    }

    return 0;

}
