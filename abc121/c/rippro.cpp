#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rrep(i, n) for(int i = (int)(n); i >= 0; i--)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define RREP(i, a, n) for(int i = (int)(n); i >= a; i--)
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
    int N,M;
    cin >> N >> M;

    vector<pair<ll, ll> > A(N);
    rep(i,N) cin >> A[i].first >> A[i].second;
    sort(all(A));

    //rep(i,N) cout << A[i].first << " " << A[i].second << endl;
    ll ans = 0;
    
    int key = 0;
    while( M > 0 )
    {
        if( A[key].second <= M )
        {
            M -= A[key].second;
            ans += A[key].first * A[key].second;
        }
        else
        {
            ans += M * A[key].first;
            M = 0;
        }
        key++;
        //cout << ans << endl;
    }
    cout << ans << endl;

    

}
