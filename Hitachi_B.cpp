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
    int A,B,M;
    cin >> A >> B >> M;

    vector<int> a(A);
    rep(i,A) cin >> a[i];

    vector<int> b(B);
    rep(i,B) cin >> b[i];

    ll ans = INF;

    // 割引使う場合
    rep(i,M)
    {
        int x, y, c;
        cin >> x >> y >> c;
        if( a[x-1] + b[y-1] - c < ans ) ans = a[x-1] + b[y-1] - c;
    }

    // 割引使わない場合
    sort(all(a));
    sort(all(b));
    if( a[0] + b[0] < ans ) cout << a[0] + b[0] << endl;
    else cout << ans << endl;

}
