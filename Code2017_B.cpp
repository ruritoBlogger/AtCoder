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

    vector<ll> D(N);
    rep(i,N)
    {
        cin >> D[i];
    }

    ll M;
    cin >> M;

    multiset<ll> T;
    set<ll> t;
    rep(i,M)
    {
        ll tmp;
        cin >> tmp;
        T.insert(tmp);
        t.insert(tmp);
    }
    sort(all(D));

    ll key = 0;
    for( multiset<ll>::iterator itr = t.begin(); itr != t.end(); ++itr)
    {
        ll tmp = 0;
        bool flag = false;
        size_t cnt = T.count(*itr);
        for( key; key < N;key++)
        {
            //cout << *itr << " " << D[key] << " " << tmp << " " << cnt << endl;
            if( D[key] == *itr )
            {
                tmp++;
            }
            if( tmp >= cnt )
            {
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}
