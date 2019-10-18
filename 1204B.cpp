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
    int n, l, r;
    cin >> n >> l >> r;
    int arr[n] = {0};
    int arrb[n] = {0};
    for (int i = 0; i < n; ++i) {
        if (i < l) {
            arr[i] = pow(2, i);
        } else {
            arr[i] = 1;    
        }
    }
    int sum = 0, sumb = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    cout << sum << " ";
    for (int i = 0; i < n; ++i) {
        if (i < r) {
            arrb[i] = pow(2, i);
        } else {
            arrb[i] = pow(2, r - 1);
        }
    }
    for (int i = 0; i < n; ++i) {
        sumb += arrb[i];
    }
    cout << sumb << "\n";
    return 0;
}
