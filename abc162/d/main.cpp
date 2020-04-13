#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
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
    int N;
    string s;
    cin >> N >> s;
   
    // RGB
    vector<vector<ll> > dp(N+1, vector<ll>(3, 0));
    
    rep(i,N)
    {
        if( s[i] == 'R' ) dp[i+1][0] = dp[i][0]+1;
        else if( s[i] == 'G' ) dp[i+1][1] = dp[i][1]+1;
        else dp[i+1][2] = dp[i][2]+1;
        rep(j, 3) chmax(dp[i+1][j], dp[i][j]);
    }
    /*
    rep(i,dp.size())
    {
        cout << dp[i][0] << " " << dp[i][1] << " " << dp[i][2] << endl;
    }
    */

    ll ans = 0;
    rep(i, N-2)
    {
        REP(j, i+1, N-1)
        {
            ll yet_r = dp[N][0] - dp[j+1][0];
            ll yet_g = dp[N][1] - dp[j+1][1];
            ll yet_b = dp[N][2] - dp[j+1][2];

            if( s[i] == s[j] ) continue;
            else
            {
                if( (s[i] == 'R' || s[i] == 'G')&& (s[j] == 'R' || s[j] == 'G') ) ans += yet_b;
                else if( (s[i] == 'R' || s[i] == 'B')&& (s[j] == 'R' || s[j] == 'B') )ans += yet_g;
                else if( (s[i] == 'G' || s[i] == 'B')&& (s[j] == 'G' || s[j] == 'B') )ans += yet_r;
            }
            
            // j - i == k - j のチェック
            ll k = j + (j - i);
            if( k < N && s[j] != s[k] && s[i] != s[k] ) ans--;
        }
    }
    cout << ans << endl;
}
