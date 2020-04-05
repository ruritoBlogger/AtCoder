#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

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

    vector<vector<int> > x(M,vector<int>(2));
    rep(i,M) cin >> x[i][0] >> x[i][1];

    //sort(all(x));

    vector<int> dp(N+1, 0);
    
    rep(i,M)
    {
        chmax(dp[x[i][1]], dp[x[i][0]]+1);
    }
    
    vector<int>::iterator itr = max_element(all(dp));
    size_t index = distance(dp.begin(), itr);
    cout << dp[index] << endl;
            

}
