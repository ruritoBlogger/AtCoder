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

ll calcDP( string s )
{
    vector<vector<vector<ll> > > dp(s.size()+1, vector<vector<ll> > (2, vector<ll>(12,0)));
    
    dp[0][0][0] = 1;

    rep(i,s.size())
    {
        int key = s[i]-'0';
        rep(smaller, 2)
        {
            rep(one_cnt, 10)
            {
                rep(n, (smaller? 10 : key+1))
                {
                    if( n == 1 ) dp[i+1][smaller || n < key][one_cnt+1] += dp[i][smaller][one_cnt];
                    else dp[i+1][smaller || n < key][one_cnt] += dp[i][smaller][one_cnt];
                }
            }
        }
    }

    /*
    rep(i, dp.size())
    {
        rep(j, 2) cout << dp[i][j][1] << " ";
        cout << endl;
    }
    */

    ll ans = 0;
    rep(i,s.size()+1)
    {
        ans += (dp[s.size()][0][i]+dp[s.size()][1][i])*i;
    }

    return ans;
}


int main()
{
    ll n;
    cin >> n;
    string N = to_string(n);
    
    cout << calcDP(N) << endl;
}
