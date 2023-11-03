#include<bits/stdc++.h>
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
149
150
151
152
153
154
155
156
157
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
    
