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

ll N,K;
vector<ll> A;
vector<ll> F(N);

ll nibu( int key, int len )
{
    bool flag = true;
    ll tmp_K = K;
    rep(i,N)
    {
        while( A[i] * F[i] <= key && tmp_K > 0 )
        {
            A[i]--;
            tmp_K--;
        }
        if( tmp_K == 0 && A[i] * F[i] > key ) flag=false;
    }
        
    if( !flag ) return nibu( key - len, len/2 + 1 );
    else return nibu( key + len, len/2+1 );
}

int main()
{
    cin >> N >> K;

    rep(i,N)
    {
        ll tmp;
        cin >> tmp;
        A.push_back(tmp);
    }
    
    rep(i,N)
    {
        ll tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    sort(all(A));
    sort(all(F),greater<ll>());

}
