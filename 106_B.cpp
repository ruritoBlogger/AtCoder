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

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }


int main()
{
    int N;
    cin >> N;

    vector<ll> keys;
    if( N < 105 ) cout << 0 << endl;
    else
    {
        int ans = 0;
        REP(i,105, N+1)
        {
            if(i%2==0)continue;
            keys = divisor(i);
            if( keys.size() == 8 ) ans++;
        }
        cout << ans << endl;
    }
}
