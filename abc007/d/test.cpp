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
    vector<vector<vector<ll> > > dp(s.size()+1, vector<vector<ll> > (2, vector<ll>(2,0)));
    
    dp[0][0][0] = 1;

    rep(i,s.size())
    {
        int key = s[i]-'0';
        rep(smaller, 2)
        {
            rep(isUsed, 2)
            {
                // s[i]ぴったし
                rep(n, (smaller? 10 : key+1))
                {
                    dp[i+1][smaller || n < key][n == 4 || n == 9 || isUsed] += dp[i][smaller][isUsed];
                }
            }
        }
    }

    return dp[s.size()][0][1] + dp[s.size()][1][1];
}


int main()
{
    ll a,b;
    string A,B;
    cin >> a >> b;
    a--;
    A = to_string(a);
    B = to_string(b);

    cout << calcDP(B)-calcDP(A) << endl;
}
