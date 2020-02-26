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

    vector<pair<ll, ll> > A;
    rep(i,N)
    {
        ll tmp;
        cin >> tmp;
        A.push_back(make_pair(tmp, i+1));
    }
    sort(all(A));
    rep(i,N)
    {
        cout << A[i].second;
        if( i+1 != N ) cout << " ";
    }
    cout << endl;
}
