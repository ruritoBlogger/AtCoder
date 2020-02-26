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
    ll NA,NB;
    cin >> NA >> NB;
   
    set<ll> OR;
    set<ll> AA;
    set<ll> BB;

    rep(i,NA)
    {
        ll tmp;
        cin >> tmp;
        OR.insert(tmp);
        AA.insert(tmp);
    } 

    rep(i,NB)
    {
        ll tmp;
        cin >> tmp;
        OR.insert(tmp);
        BB.insert(tmp);
    }

    ll ans = 0;
    for(set<ll>::iterator itr = AA.begin(); itr != AA.end(); ++itr)
    {
        if( BB.find(*itr) != BB.end() ) ans++;
    }
    cout << float(ans)/float(OR.size()) << endl;
}
