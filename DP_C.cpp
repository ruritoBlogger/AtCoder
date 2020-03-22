#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF_LL 1LL << 60
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

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
    int N;
    cin >> N;

    vector<vector<int> > abc;
    rep(i,N)
    {
        vector<int> tmp;
        int a,b,c;
        cin >> a >> b >> c;
        tmp.push_back(a);
        tmp.push_back(b);
        tmp.push_back(c);
        abc.push_back(tmp);
    }
    
    vector<vector<ll> > dp(N+1,vector<ll>(3, 0));

    rep(i,N)
    {
        rep(j,3)
        {
            rep(k,3)
            {
                if( j==k )continue;
                chmax( dp[i+1][j], max( dp[i][j] + abc[i][k], dp[i][j] + abc[i][k] ) );
            }
        }
    }
    cout << max( dp[N][0], max( dp[N][1], dp[N][2] ) ) << endl;
}
