#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define all(x) (x).begin(), (x).end()

void solve()
{
  string num1, num2, a, b, c;
  ll degree, number, res;
  cin >> num1 >> num2;

  num1 = num1[num1.length() - 1];
  a = num2[num2.length() - 2];
  b = num2[num2.length() - 1];
  c = a + b;
  number = stoll(num1);
  degree = stoll(c) % 4;

  if (degree == 0) {
    degree = 4;
  }
  res = pow(number, degree);

  num1 = to_string(res);
  num1 = num1[num1.length() - 1];

  cout << num1;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}
