#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

int main()
{
    int H,N;
    cin >> H >> N;

    vector<pair<int, int> >ab(N);
    rep(i,N) cin >> ab[i].first >> ab[i].second;
    vector<vector<int> >dp( N + 1, vector<int>(H + 1, INF));
    dp[0][0] = 0;
    
    rep(i, dp.size()-1)
    {
        rep(j,dp[i].size())
        {
            if( j <= ab[i].first ) dp[i+1][j] = min(dp[i][j], ab[i].second);
            else dp[i+1][j] = min(dp[i][j], dp[i+1][j-ab[i].first] + ab[i].second);
        }
    }
    /*
    rep(i,dp.size())
    {
        rep(j,dp[i].size()) cout << dp[i][j] << " ";
        cout << endl;
    }
    */
    cout << dp[N][H] << endl;
}
