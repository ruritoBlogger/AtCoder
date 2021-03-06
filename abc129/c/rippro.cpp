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
    int N,M;
    cin >> N >> M;
    set<int> a;
    rep(i,M)
    {
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    }

    vector<ll> dp(N+1,0);
    dp[0] = 1;
    
    rep(i,N+1)
    {
        if( i+1 < N+1 && a.find(i+1) == a.end() )
        {
            chmax(dp[i+1], dp[i]);
            if( i+2 < N+1 && a.find(i+2) == a.end() ) chmax(dp[i+2], dp[i]+dp[i+1]);
        }
        if( i+2 < N+1 && a.find(i+2) == a.end() ) chmax(dp[i+2], dp[i]);
    }
    //rep(i,dp.size()) cout << dp[i] << " ";
    //cout << endl;
    cout << dp[N]%MOD << endl;
}
