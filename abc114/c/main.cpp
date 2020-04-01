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

ll N;
ll LEN;

ll dfs( ll key, ll len , set<ll> & num)
{
    if( LEN < len ) return 0;
    ll ans = 0;
    if( key <= N && num.size() == 3 )
    {
        ans++;
    }

    set<ll> tmp = num;
    tmp.insert(3);
    ans += dfs( key + pow(10,len) * 3, len+1, tmp );
    tmp = num;
    tmp.insert(5);
    ans += dfs( key + pow(10,len) * 5, len+1, tmp );
    tmp = num;
    tmp.insert(7);
    ans += dfs( key + pow(10,len) * 7, len+1, tmp );
    return ans;
}

int main()
{
    cin >> N;
    LEN = to_string(N).size();
    set<ll> tmp;

    cout << dfs(0, 0, tmp) << endl;
}
