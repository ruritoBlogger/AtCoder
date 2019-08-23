#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int D,G;

vector<pair<ll, ll> >pc;
vector<pair<ll, ll> >wa;

ll dfs(int g, vector<bool>isUsed)
{
    if(g == D) return 0;
    else if(g <= D*100)
    {
        for(int i = D-1;i > -1;i--)
        {
            if(!isUsed[i])
            {
                return g/( (i) * 100);
            }
        }
    }

    ll ans = INF;
    rep(i,D)
    {
        if(!isUsed[i] && g >= wa[i].first)
        {
            isUsed[i] = false;
            ans = min(ans, dfs( g - wa[i].first, isUsed) + pc[wa[i].second].first );
            cout << "now g is " << g << " and looking is " << wa[i].first << " and ans is " << ans << endl;
        }
        else if(!isUsed[i] && g <= pc[i].first * 100 * (i+1))
        {
            rep(j,pc[i].first)
            {
                if(g >= pc[i].first * 100 * (j+1))
                {
                    isUsed[i] = false;
                    ans = min(ans, dfs( g - pc[i].first * 100 * (j+1), isUsed) + (i+1));
                    break;
                }
            }
        }
    }
    return ans;
}

int main()
{
    cin >> D >> G;

    pc.resize(D);
    wa.resize(D);
    rep(i,D)
    {
        cin >> pc[i].first >> pc[i].second;
        wa[i].first = pc[i].first * (i + 1) * 100 + pc[i].second;
        wa[i].second = i;
    }
    sort(all(wa),greater<pair<ll, ll> >());
    //rep(i,D) cout << wa[i].first << " " << wa[i].second << endl;
    vector<bool>isUsed(D,false);
    cout << dfs(G, isUsed) << endl;
}
