#include <stdio.h>

int main()
{
    int n = 13;
    int rev = 0;

    for(int i=0; i<n; i++){

            if(i > n/2){
                rev = 1;
            }

        for(int j=0; j<n; j++){

                if(!rev){

                    if( j >= i && j<= n-i-1 ){
                        printf("C");
                    } else{
                        printf(" ");
                    }

                } else{

                    if( j >= n-i-1 && j<= i ){
                        printf("C");
                    } else{
                        printf(" ");
                    }

                }

        }

        printf("\n");

    }
}
