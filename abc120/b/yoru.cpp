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

ll gcd(ll x, ll y)
{
	return y==0 ? x:gcd(y,x % y);
}

template<typename T> vector<ll> divisor( T n)
{
  vector<ll> ret;
  for(ll i = 1; i * i <= (ll)(n); i++) {
    if(n % i == 0) {
      ret.push_back(i);
      if(i * i != n) ret.push_back(n / i);
    }
  }
  sort(all(ret));
  return ret;
}

int main()
{
    int A,B,K;
    cin >> A >> B >> K;
    
    int key = gcd(A,B);
    vector<ll> ans = divisor(key);
    reverse(all(ans));
    //rep(i, ans.size()) cout << ans[i] << endl;
    cout << ans[K-1] << endl;

    

}
