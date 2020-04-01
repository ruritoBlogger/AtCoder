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
    int N;
    cin >> N;

    vector<int> A(N);
    rep(i,N) cin >> A[i];
    int key = 0;
    int last = 0;
    rep(i,N)
    {
        key += abs( last - A[i] );
        last = A[i];
    }
    key += abs( 0 - last );
        


    rep(i,N)
    {
        int ans = key;
        if( i == 0 ) cout << ans << endl;
        else
        {
            if( A[i] > 0 && A[i-1] > 0 && A[i-1] < A[i] )
            {
                ans -= (A[i] - A[i-1]) * 2;
            }
            else if( A[i] < 0 && A[i-1] < 0 && A[i-1] > A[i] )
            {
                ans -= abs(A[i] - A[i-1])*2;
            }
            else if( A[i] < 0 && A[i-1] > 0 )
            {
                ans -= abs(A[i]) * 2;
            }
            else if( A[i] > 0 && A[i-1] < 0 )
            {
                ans -= abs(A[i]) * 2;
            }
            cout << ans << endl;
        }
    }
}
