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
    vector<int> a(N);
    rep(i,N) cin >> a[i];

    ll total = 0;
    rep(i,N) total += a[i];
    ll key = total/N;
    ll key2 = total/N+1;

    ll ans = INF;

    ll tmp_ans = 0;
    rep(i,N)
    {
        tmp_ans += pow(key-a[i],2);
    }
    chmin(ans, tmp_ans);
     
    tmp_ans = 0;
    rep(i,N)
    {
        tmp_ans += pow(key2-a[i],2);
    }
    chmin(ans, tmp_ans);           
    cout << ans << endl;
}
