#include <iostream>
using namespace std;
#define pb push_back
#define fi(name) freopen(name, "r", stdin)
#define fo(name) freopen(name, "w", stdout)
#define FastIO ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
int n;
int a[60001],b[60001],f[60001];
int main()
{
    FastIO;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n-1; i++)
        cin>>b[i];

    int dem=0;
    f[0]=a[0];
    for(int i=1; i<n; i++)
        f[i]=min(f[i-2]+b[i-1],f[i-1]+a[i]);
    cout<<f[n-1]<<endl;
    return 0;
}
    
