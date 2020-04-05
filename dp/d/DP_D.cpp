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

int main()
{
    int N,W;
    cin >> N >> W;

    vector<vector<ll> >item(N,vector<ll>(2));
    rep(i, N) cin >> item[i][0] >> item[i][1];

    vector<vector<ll> >dp(N+1, vector<ll>(W+1, 0));

    rep(i,N)
    {
        rep(j,W+1)
        {
            if( j >= item[i][0] ) dp[i+1][j] = max(dp[i][j], dp[i][j - item[i][0]] + item[i][1]);
            else dp[i+1][j] = dp[i][j];
        }
    }
    /*
    rep(i,dp.size())
    {
        rep(j, dp[0].size()) cout << dp[i][j] << " ";
        cout << endl;
    }
    */
    cout << dp[N][W] << endl;



}
