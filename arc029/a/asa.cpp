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
    int N;
    cin >> N;

    vector<int> t(N);
    rep(i,N) cin >> t[i];

    int total = 0;
    rep(i,N) total += t[i];

    int ans = INF;
    
    rep(bit,(1<<N))
    {
        vector<int> S;
        rep(i,N)
        {
            if (bit & (1<<i)) S.push_back(i);
        }
        
        int tmp_total = 0;
        for (int i = 0; i < (int)S.size(); ++i)
        {
            tmp_total += t[S[i]];
        }
        chmin(ans, max(total-tmp_total, tmp_total));
    }
    cout << ans << endl;
}
