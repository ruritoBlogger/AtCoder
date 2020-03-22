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
    ll H,N;
    cin >> H >> N;

    vector<int> A(N);
    ll all = 0;
    rep(i,N)
    {
        cin >> A[i];
        all += A[i];
    }
    if( H <= all ) cout << "Yes" << endl;
    else cout << "No" << endl;


}
