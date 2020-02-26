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
    ll N,K;
    cin >> N >> K;
    vector<ll> p(N);
    rep(i,N) cin >> p[i];

    std::vector<ll>::iterator iter = std::max_element(all(p));
    size_t index = std::distance(p.begin(), iter);
    ll max = p[index];

    vector<ll> ruiseki;
    ruiseki.push_back(0);
    rep(i,max) ruiseki.push_back( ruiseki[ruiseki.size()-1] + i + 1 );

    /*
    rep(i,ruiseki.size()) cout << ruiseki[i] << " ";
    cout << endl;
    */

    vector<ll> p_rui;
    p_rui.push_back(0);

    rep(i,N)
    {
        p_rui.push_back( p_rui[p_rui.size()-1] + p[i] );
    }

    /*
    rep(i,p_rui.size()) cout << p_rui[i] << " ";
    cout << endl;
    */

    ll key = 0;
    ll point = 0;

    for( ll i = 0;i < p_rui.size()-K;i++)
    {
        if( key < p_rui[i+K] - p_rui[i] )
        {
            key = p_rui[i+K] - p_rui[i];
            point = i;
        }
    }

    double ans = 0;
    cout << (K + p_rui[point + K] - p_rui[point])/2.0 << endl;
    rep(i,K)
    {
        ll tmp = p_rui[point + i + 1] - p_rui[point + i];
        //cout << ruiseki[tmp] << " " << tmp << " " << double(ruiseki[tmp])/double(tmp) << endl;
        ans += double(ruiseki[tmp])/double(tmp);
    }
    //cout << ans << endl;
}
