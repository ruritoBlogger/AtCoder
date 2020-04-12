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
    ll N;
    cin >> N;
    vector<ll> a(N);
    rep(i,N) cin >> a[i];

    vector<ll> dp;
    dp.push_back(0);
    rep(i,N) dp.push_back(dp[dp.size()-1]+a[i]);

    ll ans = INF_LL;
    REP(i, 1, N)
    {
        //cout << abs( (dp[i]-dp[0]) - (dp[dp.size()-1]-dp[i]) ) << endl;
        chmin(ans, abs( (dp[i]-dp[0]) - (dp[dp.size()-1]-dp[i]) ));
    }
    cout << ans << endl;
}
