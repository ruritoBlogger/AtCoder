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
    int N,M;
    cin >> N >> M;

    vector<ll> a(N);
    vector<ll> b(N);
    rep(i,N) cin >> a[i] >> b[i];

    vector<ll> c(M);
    vector<ll> d(M);
    rep(i,M) cin >> c[i] >> d[i];

    rep(i,N)
    {
        int near_point = 1;
        ll dist = abs(a[i]-c[0])+ abs(b[i]-d[0]);
        REP(j, 1, M)
        {
            if( abs(a[i]-c[j])+abs(b[i]-d[j]) < dist )
            {
                dist = abs(a[i]-c[j])+abs(b[i]-d[j]);
                near_point = j+1;
            }
        }
        cout << near_point << endl;
    }


}
