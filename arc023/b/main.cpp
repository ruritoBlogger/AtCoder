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
    int R,C,D;
    cin >>R >> C >> D;

    vector<vector<int> > A(R,vector<int>(C));
    rep(i,R)
    {
        rep(j,C) cin >> A[i][j];
    }
    
    vector<vector<int> > dist(R,vector<int>(C));
    rep(i,C) dist[0][i] = i;
    REP(i, 1, R)
    {
        rep(j, C) dist[i][j] = dist[i-1][j]+1;
    }

    int ans = 0;

    rep(i,R)
    {
        rep(j,C)
        {
            if( D < dist[i][j] ) continue;
            else
            {
                if( (D-dist[i][j])%2==0 ) chmax(ans, A[i][j]);
            }
        }
    }

    cout << ans << endl;
}
