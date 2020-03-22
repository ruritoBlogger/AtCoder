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
    int N,K;
    cin >> N >> K;

    vector<int> h(N);
    rep(i,N) cin >> h[i];
    
    int ans = 0;
    rep(i,N)
    {
        if( K <= h[i] ) ans++;
    }
    cout << ans << endl;


}
