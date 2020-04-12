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
    string N;
    cin >> N;

    vector<vector<ll> > dp(N.size(), vector<ll>(2, 0) );

    int top = N[0]-'0';
    // 0ならNぴったし
    dp[0][0] = top;
    dp[0][1] = top-1;

    REP(i, 1, N.size())
    {
        int key = N[i]-'0';

        chmax(dp[i][0], dp[i-1][0]+key);
        chmax(dp[i][1], dp[i-1][1]+9);
    }

    /*
    rep(i,dp.size())
    {
        rep(j, dp[i].size()) cout << dp[i][j] << " ";
        cout << endl;
    }
    */
    cout << max(dp[dp.size()-1][0], dp[dp.size()-1][1]) << endl;
}
