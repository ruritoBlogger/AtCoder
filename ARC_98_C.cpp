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
    string s;
    cin >> N >> s;

    vector<ll> East;
    vector<ll> West;
    East.push_back(0);
    West.push_back(0);


    rep(i,N)
    {
        if(s[i] == 'E' )
        {
            East.push_back(East[East.size()-1]+1);
            West.push_back(West[West.size()-1]);
        }
        else
        {
            East.push_back(East[East.size()-1]);
            West.push_back(West[West.size()-1]+1);
        }
    }

    ll ans = INF;
    for(ll i = 1; i <= N; i++)
    {
        ll tmp = (East[East.size()-1] - East[i] ) + West[i-1];
        if( tmp < ans ) ans = tmp;
    }
    
    cout << ans << endl;
}
