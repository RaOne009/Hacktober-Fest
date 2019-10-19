/*
lakshaygpt28
Lakshay Gupta
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

using ll = long long;
using db = double;
using pii = pair < int, int >;
using pll = pair < ll, ll >;
using vll = vector < ll >;

template < typename T > using OrderedSet = tree < T, null_type, less < T >, rb_tree_tag, tree_order_statistics_node_update >;
template < typename T > using MinPriorityQueue = priority_queue < T, vector < T >, greater < T > >;


#ifndef ONLINE_JUDGE
#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1) {
    cerr << name << " : " << arg1 << std :: endl;
}
template < typename Arg1, typename... Args >
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define debug(...)
#endif

#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define eb emplace_back
#define mp make_pair
#define pb push_back
#define mt make_tuple
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const db PI = acos(-1);
const ll LINF = LLONG_MAX;
const int INF = INT_MAX, MOD = 1e9 + 7, N = 1e5 + 10;

int main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        bool flag = 1;
        for (int i = 0; i < n; i++) {
            if (s[i] != '.') {
                int x = s[i] - '0';
                for (int j = i + 1; j < n; j++) {
                    if (s[j] != '.') {
                        int y = s[j] - '0';
                        if (i + x >= j - y) {
                            flag = 0;
                            break;
                        }
                    }
                }
            }
            if (!flag) {
                break;
            }
        }
        if (flag) {
            cout << "safe\n";
        } else {
            cout << "unsafe\n";
        }
    }
    return 0;
}
