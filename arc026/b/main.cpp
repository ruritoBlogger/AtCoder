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

template<typename T> ll divisor( T n)
{
  ll ret = 0;
  for(ll i = 1; i * i <= (ll)(n); i++) {
    if(n % i == 0) {
      ret+=i;
      if(i * i != n) ret+=n/i;
    }
  }
  //sort(all(ret));
  return ret;
}

int main()
{
    ll N;
    cin >> N;
    ll total = divisor(N)-N;
    if( total == N ) cout << "Perfect" << endl;
    else if( total > N ) cout << "Abundant" << endl;
    else cout << "Deficient" << endl;
}
