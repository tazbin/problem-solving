#include <bits/stdc++.h>
using namespace std;

map<int, long long int> memo;

long long int getFibonacci(int n)
{
    if( n==1 || n==2 )
    {
        return 1;
    }
    if( memo[n] )
    {
        return memo[n];
    }

    long long p = getFibonacci(n-1) + getFibonacci(n-2);
    memo[n] = p;
    return p;
}

int main()
{
    int n;
    cin >> n;

    long long int num = getFibonacci(n);
    cout << num << endl;

    return 0;
}
