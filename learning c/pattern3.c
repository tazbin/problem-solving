#include <stdio.h>

int main()
{
    int n = 9;
    int rev = 0;

    for(int i=0; i<n+(n-1); i++){

            if(i >= n){
                rev = 1;
            }

        for(int j=0; j<n+1; j++){

            if(!rev){
                if(j > i){
                    printf("C");
                } else{
                    printf(" ");
                }
            } else{
                if(j >= n+(n-1)-i){
                    printf("C");
                } else{
                    printf(" ");
                }
            }



        }

        printf("\n");

    }
    return 0;
}
