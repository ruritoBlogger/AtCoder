#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF_LL 1LL << 60
#define INF 99999999
#define MOD (ll)1000000007
#define MAX 510000
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

template <typename t> t mod_pow(t n, t r, t m)
{
	t ret = 1;
	t tmp = n;
	
	while(r != 0) {
		if(r % 2) {
			ret *= tmp;
		}
		tmp *= tmp;
		tmp %= m;
		ret %= m;
		r /= 2;
	}
	return ret;
}

template <typename t> t mod_inv (t a, t m)
{
	return mod_pow(a, m - 2, m);
}

template <typename t> t mod_div (t a, t b, t m)
{
	return a * mod_inv(b, m) % m;
}

template <typename t> t mod_sub (t a, t b, t m)
{
	return (a < b) ? m + a - b : (a - b) % m;
}

long long fac[MAX], finv[MAX], inv[MAX];
 
// テーブルを作る前処理
void COMinit()
{
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++)
    {
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}
 
// 二項係数計算
long long COM(int n, int k)
{
    if (n < k)
        return 0;
    if (n < 0 || k < 0)
        return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main()
{
    int N,K;
    cin >> N >> K;

    vector<ll> A(N);
    rep(i,N) cin >> A[i];

    sort(all(A));

    COMinit();

    ll ans = 0;

    rep(i,N)
    {
        ans += A[i] * COM(i, K-1);
        ans -= A[i] * COM(N-i-1, K-1);
        ans %= MOD;
    }

    cout << ans << endl;
}
