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
    int N;
    cin >> N;

    vector<pair<int, int> >ab(N);
    rep(i,N) cin >> ab[i].first >> ab[i].second;

    vector<pair<int, int> >cd(N);
    rep(i,N) cin >> cd[i].first >> cd[i].second;

    vector<vector<int> >dp;
    vector<int> tmp(N+1,0);
    rep(i,N+1) dp.push_back(tmp);

    /*
    rep(i,dp.size())
    {
        rep(j,dp[i].size()) cout << dp[i][j] << " ";
        cout << endl;
    }
    */
        cout << endl;

    rep(i,N)
    {
        rep(j,N)
        {
            if( ab[i].first < cd[j].first && ab[i].second < cd[j].second ) dp[i+1][j+1] = max( dp[i+1][j+1], dp[i][j]+1);
            dp[i+1][j+1] = max( dp[i+1][j+1], dp[i][j+1] );
            dp[i+1][j+1] = max( dp[i+1][j+1], dp[i+1][j] );
        }
        rep(i,dp.size())
        {
            rep(j,dp[i].size()) cout << dp[i][j] << " ";
            cout << endl;
        }
        cout << endl;

    }
    cout << dp[N][N] << endl;

}
