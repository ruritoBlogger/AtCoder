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

    vector<double> a(N);
    vector<double> b(N);
    vector<double> c(N);
    vector<double> d(N);
    vector<double> e(N);

    double ans = 0;
    
    rep(i,N)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i];
        chmax(ans, a[i]+b[i]+c[i]+d[i]+e[i]*11.0/90.0 );
    }
    put_double(ans);
}
