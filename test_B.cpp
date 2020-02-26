#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

int main()
{
    ll N;
    cin >> N;
    vector<ll> A(N+1);
    rep(i,N+1) cin >> A[i];

    vector<ll> B(N);
    rep(i,N) cin >> B[i];

    ll ans = 0;
    rep(i,N)
    {
        if( A[i] + A[i+1] > B[i] )
        {
            if( A[i] > B[i] ) ans += B[i];
            else
            {
                ans += B[i];
                B[i] -= A[i];
                A[i+1] -= B[i];
            }
        }
        else
        {
            ans += A[i] + A[i+1];
            A[i+1] = 0;
        }
    }
    cout << ans << endl;
}
