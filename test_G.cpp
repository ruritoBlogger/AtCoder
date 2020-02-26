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
    vector<ll> A(N);
    rep(i,N) cin >> A[i];

    sort(all(A));

    ll Max = A[A.size()-1];

    ll ans = INF;
    ll ans_key = 0;

    rep(i,N-1)
    {
        cout << A[i] << " " << Max/A[i] * A[i] << " " << Max/(A[i]-1) * A[i] << endl;
        if( min( abs(Max - Max/A[i] * A[i]) + Max%A[i], abs(Max - Max/(A[i]-1) * A[i]) + Max%A[i])< ans )
        {
                ans = min( abs(Max - Max/A[i] * A[i] + Max%A[i]), abs(Max - Max/(A[i]-1) * A[i]) + Max%A[i]);
                ans_key = i;
        }
    }
    cout << A[ans_key] << " " << Max << endl;
}
