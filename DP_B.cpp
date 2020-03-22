#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF_LL 1LL << 60
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

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
    int N, K;
    cin >> N >> K;
    vector<int> h(N);
    rep(i,N) cin >> h[i];

    vector<ll> dp(N, INF_LL);
    dp[0] = 0;

    rep(i,N)
    {
        REP(j, 1, K+1)
        {
            if( i - j < 0 )break;
            chmin( dp[i], dp[i-j] + abs(h[i] - h[i-j]) );
        }
    }
    //rep(i,dp.size()) cout << dp[i] << " ";
    //cout << endl;
    cout << dp[N-1] << endl;
}
