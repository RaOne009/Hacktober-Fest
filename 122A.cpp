#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  long long a;
  cin >> a;
  if (a % 4 == 0 || a % 7 == 0 || a % 47 == 0 || a % 74 == 0 || a % 447 == 0 || a % 774 == 0 || a % 747 == 0 || a % 477 == 0){
    cout << "YES" << "\n";
  } else {
    cout << "NO" << "\n";
  }
  int check[20] = {};
  for (int i = 0; i < 20; ++i) {
    if (a % check[i] == 0) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";d
  return 0;
}
