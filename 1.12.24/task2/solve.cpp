#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define all(x) (x).begin(), (x).end()

void solve(string s)
{
  string tt;

  for(int i = 0; i < s.length(); i++) {
    ll t = i;
    t++;
    while (t != 0) {
      if (i == 0) {
        tt += toupper(s[i]);
        tt += '-';
        i++;
      } else {
        if (tt[tt.size() - 1] == '-') {
          tt += toupper(s[i]);
        }
        tt += tolower(s[i]);
        t--;
      }
    }
    tt += '-';
  }

  tt.erase(tt.size() - 1);
  cout << tt;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string text;
  cin >> text;
  solve(text);

  return 0;
}
