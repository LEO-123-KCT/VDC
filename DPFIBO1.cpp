#include <iostream>
using namespace std;
typedef long long ll;
long long f[1000001];
int n;
int main()
{
    f[1] = f[2];
    cin >> n;
    for(int i = 3; i <= n; i++)
        f[i] = (f[i - 1] + f[i - 2]) % ll(1e9+7);

    cout << f[n];
    return 0;
}
