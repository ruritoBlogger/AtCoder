#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

// n ^ r % m
template <typename T> T mod_pow(T n, T r, T m)
{
	T ret = 1;
	T tmp = n;
	
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

// フェルマーの小定理より X / Y %(1e9+7) == X * Y^(1e9+7-2) % (1e9+7)
template <typename T> T mod_inv (T a, T m)
{
	return mod_pow(a, m - 2, m);
}

// a / b / m (m == 1e9+7とか)
template <typename T> T mod_div (T a, T b, T m)
{
	return a * mod_inv(b, m) % m;
}

// (a - b)%(1e9+7)
template <typename T> T mod_sub (T a, T b, T m)
{
	return (a < b) ? m + a - b : (a - b) % m;
}

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main()
{
	ll n, a, b;
	cin >> n >> a >> b;
	
    chmin(a,n-a);
    chmin(b,n-b);

	ll A = 1;
	ll B = 1;
	ll cmb = 1;
	
	for(ll i=1; i<=max(a, b); i++)
    {
		cmb = cmb * (n - i + 1) % MOD;
		cmb = mod_div(cmb, i, MOD); 
		
		if(i == a) A = cmb;
		if(i == b) B = cmb;
	}
	
	ll ans = mod_pow((ll)2, n, MOD) - 1;
	ans = mod_sub(ans, A, MOD);
	ans = mod_sub(ans, B, MOD);
	cout << ans << endl;
}
