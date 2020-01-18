#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll N,K,S;
    cin >> N >> K >> S;
    vector<ll> ans(N,S);

    if( S == 1000000000 )
    {
        if( K == 0 )
        {
            vector<ll> ans2(N,S-1);
            rep(i,ans2.size())
            {
                cout << ans2[i];
                if( i + 1 != ans2.size()) cout << " ";
            }
            cout << endl;
            return 0;
        }
        else
        {
            ll key = 0;
            ll tmp = 0;
            for( ll i = 0;i < N;i++ )
            {
                key++;
                if( tmp == N-K )
                {
                    break;
                }
                if( key == S )
                {
                    key = 0;
                    continue;
                }
                ans[i] = 3;
                tmp++;
            }
        }
    }
    else if( K == 0 )
    {
        rep(i,N) ans[i] = S+1;
    }
    else if( S != 2 )
    {
        rep(i,N-K) ans[i] = S+1;
    }
    else
    {
        rep(i,N-K) ans[i] = S-1;
    }

    rep(i,ans.size())
    {
        cout << ans[i];
        if( i + 1 != ans.size()) cout << " ";
    }
    cout << endl;
}
