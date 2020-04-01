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
    int N,K,M;
    cin >> N >> K >> M;

    vector<int> A(N-1);
    ll all = 0;
    rep(i,N-1)
    {
        cin >> A[i];
        all += A[i];
    }
    rep(i,K+1)
    {
        if( all+i >= M * N )
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;



}
