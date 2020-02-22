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
    vector<int> X(N);
    ll all = 0;
    rep(i,N)
    {
        cin >> X[i];
        all += X[i];
    }

    if( all%N == 0 ) all /= N;
    else
    {
        if( all%N > N/2 ) all = all/N+1;
        else all /= N;
    }
    ll ans = 0;
    rep(i,N)
    {
        ans += (all - X[i]) * (all - X[i]);
    }
    cout << ans << endl;



}
