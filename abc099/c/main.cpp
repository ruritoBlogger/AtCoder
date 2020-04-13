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
    ll N;
    cin >> N;

    vector<ll> nines(1,9);
    vector<ll> sixes(1,6);
    while( nines[nines.size()-1]*9 <= N )
    {
        nines.push_back(nines[nines.size()-1]*9);
    }
    while( sixes[sixes.size()-1]*6 <= N )
    {
        sixes.push_back(sixes[sixes.size()-1]*6);
    }

    vector<ll> keys(1,1);
    rep(i,nines.size()) keys.push_back(nines[i]);
    rep(i,sixes.size()) keys.push_back(sixes[i]);
    sort(all(keys),greater<ll>());

    vector<vector<ll> > dp(keys.size()+1, vector<ll>(N+1, INF_LL));
    dp[0][0] = 0; 

    rep(i, keys.size())
    {
        rep(j,N+1)
        {
            if( keys[i] <= j )
            {
                chmin(dp[i+1][j], dp[i][j-keys[i]]+1);
                chmin(dp[i+1][j], dp[i+1][j-keys[i]]+1);
            }
            chmin(dp[i+1][j], dp[i][j]);
        }
    }
    
    /*
    rep(i, dp.size())
    {
        rep(j, dp[i].size()) cout << dp[i][j] << " ";
        cout << endl;
    }
    */

    cout << dp[keys.size()][N] << endl;
}
