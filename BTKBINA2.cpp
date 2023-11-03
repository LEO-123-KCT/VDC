#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define For(i, a, b, step) for(int i(a); i <= b; i += step)
#define For_down(i, a, b, step) for(int i(a); i >= b; i -= step)
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0)
#define space(n) n << ' '
#define endl(n) n << '\n'
#define int long long

int n;
vector<int> a(1, 2);
vector<string> st;
string s;

void backtrack(int i, bool check)
{
    if(i == n)
    {
        st.emplace_back(s);
        return;
    }

    for(int j(0); j <= 1; j++)
    {
        if(j == 1)
        {
            if(s[i - 1] == '0' && check) continue;
            bool yes = (s[i - 1] == '0' ? 1 : 0) || check;
            s += "1";
            backtrack(i + 1, yes);
            s.pop_back();
        }
        else if(j == 0)
        {
            s += "0";
            backtrack(i + 1, check);
            s.pop_back();
        }
    }
}

signed main()
{
    //FastIO;
    cin >> n;
    s = "0";
    backtrack(1, 0);
    s = "1";
    backtrack(1, 0);

    cout << st.size() << '\n';
    for(string s : st) cout << endl(s);
    return 0;
}
    
