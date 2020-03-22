#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define INF_LL 1LL << 60
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
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
    int N;
    cin >> N;
    vector<int> h(N);
    rep(i,N) cin >> h[i];
 
    vector<ll> dp(N,INF_LL);
    dp[0] = 0;
    rep(i,N)
    {
        //if( i+1 < N ) chmin(dp[i+1], dp[i] + abs(h[i+1] - h[i]));
        //if( i+2 < N ) chmin(dp[i+2], dp[i] + abs(h[i+2] - h[i]));
        if( i+1 < N ) dp[i+1] = min(dp[i+1], dp[i] + abs(h[i+1] - h[i]));
        if( i+2 < N ) dp[i+2] = min(dp[i+2], dp[i] + abs(h[i+2] - h[i]));
 
        /*
        rep(i,dp.size()) cout << dp[i] << " ";
        cout << endl;
        cout << endl;
        */
    }
 
    cout << dp[dp.size()-1] << endl;
}
