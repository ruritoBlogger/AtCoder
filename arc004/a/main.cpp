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

    vector<vector<int> > x(N, vector<int>(2));
    rep(i,N) cin >> x[i][0] >> x[i][1];

    double ans = 0;

    rep(i,N)
    {
        REP(j, i+1, N)
        {
            chmax(ans, (double)(sqrt(pow(x[i][0]-x[j][0],2)+pow(x[i][1]-x[j][1],2))));
        }
    }
    put_double(ans);
}
