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
    vector<string> s(N);
    rep(i,N) cin >> s[i];

    multiset<string> A;
    set<string> a;
    rep(i,N)
    {
        A.insert(s[i]);
        a.insert(s[i]);
    }

    ll most = 0;


    for(set<string>::iterator itr = a.begin(); itr != a.end(); ++itr)
    {
        if( A.count( *itr ) > most ) most = A.count( *itr );
    }

    vector<string> ans;

    for(set<string>::iterator itr = a.begin(); itr != a.end(); ++itr)
    {
        if( A.count( *itr ) == most ) ans.push_back( *itr );
    }
    sort(all(ans));
    rep(i,ans.size()) cout << ans[i] << endl;





}
