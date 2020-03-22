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
    int N,M;
    cin >> N >> M;


    vector<int> ans(N,-1);

    rep(i,M)
    {
        int s,c;
        cin >> s >> c;
        if( ans[s-1] == -1 ) ans[s-1] = c;
        else if( ans[s-1] == c ) continue;
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    //rep(i,M) cout << ans[i];
    //cout << endl;

    
    if( ans[0] == -1 ) ans[0] = 1;
    
    if( (N == 1 && M == 0) || (N == 1 && ans[0] == 0) )
    {
        cout << 0 << endl;
        return 0;
    }

    if( ans[0] == 0 )
    {
        cout << -1 << endl;
        return 0;
    }

    rep(i,N)
    {
        if( ans[i] == -1 ) cout << 0;
        else cout << ans[i];
    }
    cout << endl;
}
