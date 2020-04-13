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
    ll N,K;
    cin >> N >> K;
    
    K--;
    vector<ll> A(N);
    rep(i,N) cin >> A[i];

    std::vector<ll>::iterator iter = std::min_element(all(A));
    size_t index = std::distance(A.begin(), iter);
    ll first = index;
    ll last = N-index-1;
    
    ll ans = 0;
    
    if( first%K == 0 ) ans += first/K;
    else ans += first/K+1;
    
    if( last%K == 0 ) ans += last/K;
    else ans += last/K+1;

    // 最小値の左
    REP(i, 1, K)
    {
        ll tmp_first = first-i;
        ll tmp_last = last-(K-i);
        ll tmp_ans = 1;
        
        if( tmp_first%K == 0 ) tmp_ans += tmp_first/K;
        else tmp_ans += tmp_first/K+1;
        
        if( tmp_last%K == 0 ) tmp_ans += tmp_last/K;
        else tmp_ans += tmp_last/K+1;

        chmin(ans, tmp_ans);
    }


    cout << ans << endl;
}
