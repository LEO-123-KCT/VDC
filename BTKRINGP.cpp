#include <bits/stdc++.h>
#define pb push_back
#define fi(name) freopen(name, "r", stdin)
#define fo(name) freopen(name, "w", stdout)
#define FastIO ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
using namespace std;
int n,a[22], socach;
bool isprime[100];
bool dd[100];
void duyet(int i)
{
    if(i==2*n)
    {
        if(!isprime[a[2*n-1]+a[0]])
        {
            for(int i = 0; i < 2 * n; i++)
            	cout << a[i] << ' ';
            cout << '\n';
        }
        return;
    }

    for(int x=1; x<=2*n; ++x) if(!isprime[x+a[i-1]] && !dd[x])
        {
            dd[x] = true;
            a[i] = x;
            duyet(i+1);
            dd[x] = false;
        }
}
void init()
{
    isprime[0] = isprime[1] = true;
    for(int i=2; i<100; ++i)
        if(!isprime[i])
            for(int j=i+i; j<100; j+=i)
                isprime[j] = true;
}
int main()
{
    FastIO;
    cin>>n;
    a[0] = dd[1] = 1;
    init();
    duyet(1);
    return 0;
}
    
