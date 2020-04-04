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
    int H,N;
    cin >> H >> N;

    vector<int> Damage(N);
    vector<int> MP(N);
    rep(i,N) cin >> Damage[i] >> MP[i];

    std::vector<int>::iterator iter = std::max_element(all(Damage));
    size_t index = std::distance(Damage.begin(), iter);

    vector<vector<ll> > dp(N+1, vector<ll>(H+Damage[index]+1,INF_LL));
    dp[0][0] = 0;

    rep(i,N)
    {
        rep(j,dp[i].size())
        {
            chmin(dp[i+1][j], dp[i][j]);
            if( j >= Damage[i] )
            {
                chmin(dp[i+1][j], dp[i][j-Damage[i]] + MP[i]);
                chmin(dp[i+1][j], dp[i+1][j-Damage[i]] + MP[i]);
            }
        }
    }
    ll ans = INF_LL;
    /*
    rep(i,dp.size())
    {
        rep(j,11) cout << dp[i][j] << " ";
        cout << endl;
    }
    */
    REP(i, H, dp[N].size())
    {
        chmin(ans, dp[N][i]);
    }
    cout << ans << endl;
}
