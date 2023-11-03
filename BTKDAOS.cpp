#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define all(a) a.begin(), a.end()
#define inc(i, a, b) for(int i = a; i <= b; i++)
#define dec(i, a, b) for(int i = a; i >= b; i--)
#define int long long
typedef long long ll;
typedef pair<int, int> ii;

 void print() {cerr << '\n';} template <typename T, typename... Args>
void print(const T &a, const Args &...args) { cerr << a << ' ', print(args...); }

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);
    string s;
    cin >> s;
    vector<string> a;
    sort(all(s));
    do
    {
        a.pb(s);
    }while(next_permutation(all(s)));
    cout << a.size() << '\n';
    for(auto &x : a) cout << x << '\n';
    return 0;
}
    
