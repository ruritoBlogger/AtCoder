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
    int N;
    cin >> N;

    vector<vector<int> > a(N, vector<int>(3));
    rep(i,N) 
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    vector<vector<ll> >dp(N, vector<ll>(3,0));
    rep(i,3) dp[0][i] = a[0][i];

    REP(i, 1, N)
    {
        rep(j, 3)
        {
            rep(k, 3)
            {
                if( j==k )continue;
                else chmax(dp[i][j], dp[i-1][k] + a[i][j]);
            }
        }
    }
    /*
    cout << endl;
    rep(i, N)
    {
        rep(j, 3) cout << dp[i][j] << " ";
        cout << endl;
    }
    */
    cout << max(dp[N-1][0], max( dp[N-1][1], dp[N-1][2] ) ) << endl;
}
