#pragma GCC optimize(2)
#pragma GCC optimize(3)
#include <bits/stdc++.h>
using namespace std;
#define int long long 
int n;
int a[100001];
int max(int &a, int &b)
{
    if(b > a) return b;
    return a;
}

signed main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for(int i(0); i <= n; i++) a[i] = 0;
        cin >> a[1];
        for (int i(2), temp; i <= n; i++)
        {
            cin >> temp;
            a[i] = max(a[i - 1], a[i - 2] + temp);
        }
        cout << a[n] << '\n';
    }

    return 0;
}
    
