#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N,M;
    cin >> M >> N;
    vector<int> X(M);
    rep(i,M) cin >> X[i];
    sort(all(X));
    vector<int> dp;
    dp.push_back(0);
    rep(i,M) dp.push_back(dp[i] + X[i]);
    rep(i,dp.size()) cout << dp[i] << " ";
    cout << endl;



}
