#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF_LL 1LL << 60
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

void put_double(double obj){printf("%.12f\n",obj);};

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }


int main()
{
    int N;
    ll W;
    cin >> N >> W;

    vector<ll> w(N);
    vector<int> v(N);
    rep(i,N) cin >> w[i] >> v[i];
    
    vector<vector<ll> > dp(N+1, vector<ll>(1e6,INF_LL));
    dp[0][0] = 0;

    rep(i,N)
    {
        rep(j,1e6)
        {
            chmin(dp[i+1][j], dp[i][j]);
            if( j >= v[i] ) chmin(dp[i+1][j], dp[i][j-v[i]] + w[i]);
        }
    }

    ll ans = 0;
    rep(i,dp[N].size())
    {
        if( dp[N][i] <= W ) chmax(ans, (ll)i);
    }
    cout << ans << endl;
}
