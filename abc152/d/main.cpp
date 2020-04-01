#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
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

    vector<ll> dp(1,1);
    for(int i = 2; i <= N; i++)
    {
        if( i%10 == 0 )
        {
            dp.push_back(dp[dp.size()-1]);
            continue;
        }

        if( i < 10 ) dp.push_back(dp[dp.size()-1] + 1);
        else if( i <= N )
        {
            int len = to_string(i).size();
            if( i/(int)pow(10,len-1) == i%10 ) dp.push_back(dp[dp.size()-1] + 3);
            else if( i%10*10 + i/(int)pow(10,len-1) > i && i%10*10 + i/(int)pow(10,len-1) <= N ) dp.push_back(dp[dp.size()-1] + 2);
        }
        else
        {
            int bottom = i%10;
        }
    }
    //rep(i,dp.size()) cout << dp[i] << " ";
    //cout << endl;
    cout << dp[dp.size()-1] << endl;



}
