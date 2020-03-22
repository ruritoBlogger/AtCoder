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
 
int H,W;
vector<string> s;
 
int main()
{
    cin >> H >> W;
 
    rep(i,H)
    {
        string tmp;
        cin >> tmp;
        s.push_back(tmp);
    }
 
    vector<vector<int> >dp(H, vector<int>(W, INF));
    dp[0][0] = 0;
    if( s[0][0] == '#' ) dp[0][0]++;
 
    rep(i,H)
    {
        rep(j,W)
        {
            if( i == 0 && j == 0 ) continue;
            else if( i == 0 )
            {
                if( s[i][j] == '#' )
                {
                    if( s[i][j-1] == '#' ) chmin(dp[i][j], dp[i][j-1]);
                    else chmin(dp[i][j], dp[i][j-1]+1);
                }
                else chmin( dp[i][j], dp[i][j-1] );
            }
            else if( j == 0 )
            {
                if( s[i][j] == '#' )
                {
                    if( s[i-1][j] == '#' ) chmin(dp[i][j], dp[i-1][j]);
                    else chmin(dp[i][j], dp[i-1][j]+1);
                }
                else chmin( dp[i][j], dp[i-1][j] );
            }
            else
            {
                if( s[i][j] == '#' )
                {
                    if( s[i][j-1] == '#' )
                    {
                        chmin(dp[i][j], dp[i][j-1]);
                    }
                    else chmin(dp[i][j], dp[i][j-1]+1);
 
                    if( s[i-1][j] == '#' )
                    {
                        chmin(dp[i][j], dp[i-1][j]);
                    }
                    else chmin(dp[i][j], dp[i-1][j]+1);
                    
                    //if( i == 2 && j == 2 ) cout << dp[i][j] << endl;
                }
                else
                {
                    chmin( dp[i][j], min(dp[i][j-1], dp[i-1][j]) );
                }
            }
        }
    }
    /*
    rep(i,dp.size())
    {
        rep(j,dp[i].size()) cout << dp[i][j] << " ";
        cout << endl;
    }
    */
    cout << dp[H-1][W-1] << endl;
}
