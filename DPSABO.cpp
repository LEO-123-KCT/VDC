#include <bits/stdc++.h>
using namespace std;
const int N = 10000 + 5;
const int mod = 1e6;

int f[N], g[N], n, k;

int main() 
{
    cin >> n >> k;
    f[0] = 0;
    g[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        g[i] = (g[i - 1] + f[i - 1]) % mod;
        if(i - k - 1 >= 0) 
            f[i] = (f[i - k - 1] + g[i - k - 1]) % mod;
        else
            f[i] = 1;
    }
    cout << (f[n] + g[n]) % mod;
}
    
