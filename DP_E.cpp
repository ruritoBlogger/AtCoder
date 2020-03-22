#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

int main() {
    int N;
    ll W;
    cin >> N >> W;
    
    vector<ll> weight(N);
    vector<ll> value(N);
    rep(i,N) cin >> weight[i] >> value[i];

    vector<vector<ll> > dp(N+1, vector<ll>(1e6, INF_LL));

    // 初期条件
    dp[0][0] = 0;

    // DPループ
    for (int i = 0; i < N; ++i) {
        for (int sum_v = 0; sum_v < dp[i].size(); ++sum_v) {

            // i 番目の品物を選ぶ場合
            if (sum_v - value[i] >= 0) chmin(dp[i+1][sum_v], dp[i][sum_v - value[i]] + weight[i]);

            // i 番目の品物を選ばない場合
            chmin(dp[i+1][sum_v], dp[i][sum_v]);
        }
    }

    // 最適値の出力
    long long res = 0;
    for (int sum_v = 0; sum_v < dp[N].size(); ++sum_v) {
        if (dp[N][sum_v] <= W) res = sum_v;
    }
    cout << res << endl;
}
