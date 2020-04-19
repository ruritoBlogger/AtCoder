#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rrep(i, n) for(int i = (int)(n); i >= 0; i--)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define RREP(i, a, n) for(int i = (int)(n); i >= a; i--)
#define all(x) (x).begin(),(x).end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

void put_double(double obj){printf("%.12f\n",obj);};

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

int main()
{
    int H,W;
    cin >> H >> W;

    vector<string> s(H);
    rep(i,H) cin >> s[i];

    vector<vector<ll> >width_dp(H, vector<ll>(W,0) );
    vector<vector<ll> >high_dp(H, vector<ll>(W,0) );

    rep(i,H)
    {
        rep(j,W)
        {
            if( s[i][j] != '#' )
            {
                if( j > 0 && width_dp[i][j-1] != 0 ) chmax(width_dp[i][j], width_dp[i][j-1]);
                else
                {
                    int tmp_j = j;
                    for( tmp_j; tmp_j < W; tmp_j++ )
                    {
                        if( s[i][tmp_j] == '#' ) break;
                        else width_dp[i][j]++;
                    }
                }

                if( i > 0 && high_dp[i-1][j] != 0 ) chmax(high_dp[i][j], high_dp[i-1][j]);
                else
                {
                    int tmp_i = i;
                    for( tmp_i; tmp_i < H; tmp_i++ )
                    {
                        if( s[tmp_i][j] == '#' ) break;
                        else high_dp[i][j]++;
                    }
                }
            }
        }
    }

    ll ans = 0;
    rep(i,H)
    {
        rep(j, W) chmax(ans, high_dp[i][j] + width_dp[i][j]-1);
    }
    cout << ans << endl;
}
