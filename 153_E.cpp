#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); i++)
template <class T>
inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
typedef long long ll;
using namespace std;
const ll INF = 1ll << 60;
 
ll dp[1005][10005];
int main() {
  int h, n;
  cin >> h >> n;
  vector<int> a(n + 2), b(n + 2);
  for (int i = 0; i < n; ++i) cin >> a[i] >> b[i];
 
  rep(i, n + 1) rep(j, h + 1) dp[i][j] = INF;
  dp[0][0] = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= h; ++j) {
      chmin(dp[i + 1][j], dp[i][j]);
      chmin(dp[i + 1][min(j + a[i], h)], dp[i + 1][j] + b[i]);
    }
  }
  rep(i,n+1)
  {
      rep(j, h+1) cout << dp[i][j] << " ";
      cout << endl;
  }
  cout << dp[n][h] << endl;
}
