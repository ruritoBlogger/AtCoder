#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
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
    ll K,N;
    cin >> K >> N;

    vector<ll> A(N);
    rep(i,N) cin >> A[i];

    ll most = 0;
    ll point = 0;
    rep(i,N-1)
    {
        if(most < abs(A[i]-A[i+1]))
        {
            most = abs(A[i]-A[i+1]);
            point = i;
        }
    }

    ll ans = 0;
    if( most < abs(K-A[N-1])+A[0] )
    {
        ans += abs(A[0]-A[N-1]);
    }
    else
    {
        ans += A[point];
        ans += (K-A[point+1]);
    }

    cout << ans << endl;
}
