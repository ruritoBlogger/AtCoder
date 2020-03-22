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

    vector<int>a(N);
    rep(i,N) cin >> a[i];

    multiset<pair<int, int> > ans_pair;
    set<pair<int, int> > key;
    rep(i,N)
    {
        ans_pair.insert( make_pair(min(i+1, a[i]), max(i+1, a[i])) );
        key.insert( make_pair(min(i+1, a[i]), max(i+1, a[i])) );
    }

    int ans = 0;

    for(set<pair<int, int> >::iterator itr = key.begin(); itr != key.end(); itr++)
    {
        if( ans_pair.count( *itr ) > 1 ) ans++;
    }
    cout << ans << endl;

}
