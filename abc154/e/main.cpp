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

int K;
ll calcDP( string s )
{
    vector<vector<vector<ll> > > dp(s.size()+1, vector<vector<ll> > (2, vector<ll>(12,0)));
    
    dp[0][0][0] = 1;

    rep(i,s.size())
    {
        int key = s[i]-'0';
        rep(smaller, 2)
        {
            rep(zero_cnt, 10)
            {
                rep(n, (smaller? 10 : key+1))
                {
                    if( n != 0 ) dp[i+1][smaller || n < key][zero_cnt+1] += dp[i][smaller][zero_cnt];
                    else dp[i+1][smaller || n < key][zero_cnt] += dp[i][smaller][zero_cnt];
                }
            }
        }
    }
    return dp[s.size()][0][K] + dp[s.size()][1][K];
}

int main()
{
    string N;
    cin >> N >> K;
    cout << calcDP(N) << endl;
}
