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

    vector<pair<ll, ll> >ab(N);
    rep(i,N) cin >> ab[i].second >> ab[i].first;
    sort(all(ab));

    ll key = 0;
    rep(i,N)
    {
        if( ab[i].second + key > ab[i].first )
        {
            cout << "No" << endl;
            return 0;
        }
        else key += ab[i].second;
    }
    cout << "Yes" << endl;
}
