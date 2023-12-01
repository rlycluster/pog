#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define all(x) (x).begin(), (x).end()

void solve(string s, string m)
{
  ll k = 1;
  string ss;
  for (auto a : s) {
    for (auto b : m) {
      if (a == b) {
        k = 0;
        break;
      }
    }
    if (k == 1) {
      ss += a;
    } else {
      break;
    }
  }
  cout << ss;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string text1, text2;
  getline(cin, text1);
  getline(cin, text2);
  solve(text1, text2);

  return 0;
}