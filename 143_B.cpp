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
    vector<int> d(N);
    rep(i,N) cin >> d[i];
    
    ll ans = 0;
    rep(i,N)
    {
        for(int j = i+1; j < N; j++)
        {
            ans += d[i] * d[j];
        }
    }
    cout << ans << endl;
            

}
