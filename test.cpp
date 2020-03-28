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
    int H,W;
    vector<string> s;
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
            if( i > 0 )
            {
                if( s[i][j] == '#' && s[i-1][j] != '#' ) chmin( dp[i][j], dp[i-1][j]+1 );
                else chmin( dp[i][j], dp[i-1][j] );
            }
            if( j > 0 )
            {
                if( s[i][j] == '#' && s[i][j-1] != '#' ) chmin( dp[i][j], dp[i][j-1]+1 );
                else chmin( dp[i][j], dp[i][j-1] );
            }
        }
    }
    cout << dp[H-1][W-1] << endl;
}
