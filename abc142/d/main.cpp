#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()


int main()
{
    ll A,B;
    cin >> A >> B;
    vector<ll> keys;

    ll min_n = A;
    if( A < B ) min_n = B;

    for( ll i = 1; i <= min_n/2; i++ )
    {
        if(A%i == 0 && B%i == 0 ) keys.push_back(i);
    }
    ll ans = 0;


    rep(bit,(1<<keys.size()) )
    {
        vector<ll> S;
        rep(i,keys.size())
        {
            if( bit & (1<<i)) S.push_back(i);
        }
        bool flag = true;
        rep(i,S.size())
        {
            for(ll j = i+1; j < S.size(); j++)
            {
                if( keys[S[j]]%keys[S[i]] == 0 && keys[S[i]] != 1 )
                {
                    flag = false;
                    break;
                }
            }
            if( !flag ) break;
        }
        if(flag) ans++;
    }

    cout << ans << endl;
}
