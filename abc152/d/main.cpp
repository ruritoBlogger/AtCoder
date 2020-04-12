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

ll calcDP( string s )
{
    vector<vector<vector<ll> > > dp(s.size()+1, vector<vector<ll> > (2, vector<ll>(9,0)));
    
    dp[0][0][0] = 1;

    rep(i,s.size()-1)
    {
        int key = s[i]-'0';
        rep(smaller, 2)
        {
            rep(top, 9)
            {
                rep(n, (smaller? 10: key+1))
                {
                    dp[i+1][smaller || n < key][top] += dp[i][smaller][top];
                }
            }
        }
    }

    ll ans = 0;
    REP(i, 1, 10)
    {
        ans += dp[s.size()][0][i] + dp[s.size()][1][i];
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    string N = to_string(n);
    cout << calcDP(N) << endl;
}
