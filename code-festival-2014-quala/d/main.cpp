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

string A;
int K;

ll calcDP( string s )
{
    vector<vector<ll> > dp(s.size()+1, vector<ll> (K, 0));
    
    dp[0][0] = 1;
   
    // 使える数字の数
    REP(j, 1, K+1)
    {
        // 使える数字
        set<int> types;
        rep(i,s.size())
        {
            if( types.size() >= j ) break;
            types.insert(s[i]-'0');
        }

        ll tmp = 0;
        rep(i,s.size()-1)
        {
            int key = s[i]-'0';
            tmp += key*pow(10,s.size()-i-1);
            rep(smaller, 2)
            {
                rep(n, (smaller? 10 : key+1))
                {
                    if( types.find(n) != types.end() )
                    {
                        if( tmp-dp[i][smaller]*pow(10,s.size()-i-1) >= 0 )
                        {
                            chmax(dp[i+1][smaller || n < key], (ll)(dp[i][smaller]*pow(10,s.size()-i-1)) );
                        }
                    }
                    //else dp[i+1][smaller || n < key][type] += dp[i][smaller][type];
                }
            }
        }
    }
    rep(i, dp.size())
    {
        rep(j, dp[i].size()) cout << dp[i][j] << " ";
        cout << endl;
    }

    ll ans = 0;
    rep(i,s.size()+1)
    {
        ans += (dp[s.size()][0]+dp[s.size()][1]);
    }

    return ans;
}

int main()
{
    cin >> A >> K;



}
