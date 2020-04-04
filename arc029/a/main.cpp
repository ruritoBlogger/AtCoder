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

int main()
{
    int N;
    cin >> N;

    vector<int> t(N);
    rep(i,N) cin >> t[i];

    int ans = INF;
    
    rep(bit,(1<<N))
    {
        set<int> S;
        rep(i,N)
        {
            if (bit & (1<<i)) S.insert(i);
        }

        int left = 0;
        int right = 0;
        rep(i,N)
        {
            if( S.find(i) != S.end() ) left += t[i];
            else right += t[i];
        }
        chmin(ans, max(left, right));
    }

    cout << ans << endl;
}
