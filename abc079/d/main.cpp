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
    int H,W;
    cin >> H >> W;

    vector<vector<int> >c(10, vector<int>(10));
    vector<vector<int> >result(10, vector<int>(10));
    
    rep(i,10)
    {
        rep(j,10)
        {
            cin >> c[i][j];
            result[i][j] = c[i][j];
        }
    }

    vector<vector<int> > A(H, vector<int>(W));
    rep(i,H)
    {
        rep(j,W) cin >> A[i][j];
    }

    rep(k,10)
    {
        rep(i,10)
        {
            rep(j,10)
            {
                result[i][j] = min(result[i][j], result[i][k] + result[k][j]);
            }
        }
    }

    ll ans = 0;
    rep(i,H)
    {
        rep(j,W)
        {
            if(A[i][j] > -1 ) ans += result[A[i][j]][1];
        }
    }
    cout << ans << endl;
}
