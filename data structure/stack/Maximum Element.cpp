#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s[100000];
    int tc;
    int a, b, m = 0, p=-1;

    cin >> tc;

    while(tc)
    {
        scanf("%d", &a);

        if(a == 1){

            scanf("%d", &b);
            if(m < b){
                m = b;
            }
            p++;
            s[p] = b;

        } else if(a == 2){
            if(m == s[p]){
                m = 0;
                p--;
                for(int i=0; i<=p; i++){
                    if(m < s[i]){
                        m = s[i];
                    }
                }
            } else{
                p--;
            }

        } else if(a == 3){

            printf("%d\n", m);

        }

        /*
        for(int j=0; j<=p; j++){
            cout << s[j] << " ";
        }
        cout << endl;
        */

        tc--;
    }
    return 0;
}
