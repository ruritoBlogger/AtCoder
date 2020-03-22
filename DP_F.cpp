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
    string s,t;
    cin >> s >> t;

    vector<vector<ll> > dp(s.size()+1, vector<ll>(t.size()+1, 0));

    rep(i,s.size())
    {
        rep(j,t.size())
        {
            if( s[i] == t[j] ) chmax(dp[i+1][j+1], dp[i][j]+1);
            chmax(dp[i+1][j+1], dp[i][j+1]);
            chmax(dp[i+1][j+1], dp[i+1][j]);
        }
    }
    /*
    rep(i,dp.size())
    {
        rep(j, dp[i].size()) cout << dp[i][j] << " ";
        cout << endl;
    }
    */
    string ans = "";
    ll i = s.size();
    ll j = t.size();
    while( i > 0 && j > 0)
    {
        if( s[i-1] == t[j-1] )
        {
            ans.push_back(s[i-1]);
            i--;
            j--;
        }
        else if( dp[i-1][j] > dp[i][j-1] ) i--;
        else j--;
    }
    reverse(all(ans));
    cout << ans << endl;

}
