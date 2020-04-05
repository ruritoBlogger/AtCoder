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
    ll N,K;
    cin >> N >> K;

    vector<ll> A(N);
    rep(i,N) cin >> A[i];

    vector<ll> F(N);
    rep(i,N) cin >> F[i];

    vector<ll> up_A = A;
    sort(all(A),greater<ll>());
    sort(all(up_A));
    sort(all(F),greater<ll>());

    ll tmp_K = K;
    rep(i,N)
    {
        if( A[i] > tmp_K )
        {
            A[i] -= tmp_K;
            break;
        }
        else
        {
            tmp_K -= A[i];
            A[i] = 0;
        }
    }

    tmp_K = K;
    rep(i,N)
    {
        if( up_A[i] > tmp_K )
        {
            up_A[i] -= tmp_K;
            break;
        }
        else
        {
            tmp_K -= up_A[i];
            up_A[i] = 0;
        }
    }

    ll ans = INF_LL;

    rep(i,N)
    {
        ans += A[i] * F[i];
    }
    ll up_ans = 0;

    rep(i,N)
    {
        up_ans += up_A[i] * F[i];
    }
    chmin(ans, up_ans);
    sort(all(F));
    up_ans = 0;

    rep(i,N)
    {
        up_ans += A[i] * F[i];
    }
    chmin(ans, up_ans);

    up_ans = 0;
    rep(i,N)
    {
        up_ans += up_A[i] * F[i];
    }
    cout << min(ans, up_ans) << endl;
}
