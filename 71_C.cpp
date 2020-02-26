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

    set<ll> key;
    multiset<ll> KEY;

    vector<ll>A(N);
    rep(i,N)
    {
        cin >> A[i];
        key.insert(A[i]);
        KEY.insert(A[i]);
    }

    vector<ll> ans;
    for(set<ll>::iterator itr = key.begin(); itr != key.end(); ++itr) 
    {
        ll tmp = KEY.count( *itr );
        while( tmp > 1 )
        {
            ans.push_back(*itr);
            tmp -= 2;
        }
    }

    sort(all(ans),greater<ll>());

    if( ans.size() < 2 ) cout << 0 << endl;
    else cout << ans[0] * ans[1] << endl;


}
