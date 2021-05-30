#include <bits/stdc++.h>
using namespace std;

int main()
{
    cha n = 10;
    int *p;

    p = &n;
    *p = 30;

    cout << &n << " " << *p << endl;
}
