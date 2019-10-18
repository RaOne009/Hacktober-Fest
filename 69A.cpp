/*
RAone00
Rohit sharma
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair < ll, ll > pll;
typedef vector < vector < ll > > matrix;
typedef vector < ll > vll;

#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll mod = 1e9 + 7;
const ll inf = LLONG_MAX;
const ll N = 1e5 + 10;

int main() {
    fast_io();
    int a, s, d, f, g = 0, h = 0, j = 0;
    cin >> a;
    for (int i = 0; i < a; ++i) {
      cin >> s >> d >> f;
      g += s;
      h += d;
      j += f;
    }
    if (g == 0 and h == 0 and j == 0 ) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
    return 0;
}
