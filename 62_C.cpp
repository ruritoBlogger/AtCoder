#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll H,W;
    cin >> H >> W;
    
    ll ans = INF;
    for(ll i = 1;i < H;i++)
    {
        if(W%2==0)
        {
            ll yet = W * (H - i);
            if( abs(yet/2 - W * i) < ans) ans = abs(yet/2 - W * i);
        }
        else
        {
            ll yet1 = (W-1) * (H - i);
            ll yet2 = (W+1) * (H - i);
            ll Max = max(W * i, max( yet1/2, yet2/2));
            ll Min = min(W * i, min( yet1/2, yet2/2));
            if( Max - Min < ans ) ans = Max - Min;
        }

    }

    for(ll i = 1;i < W;i++)
    {
        if(H%2==0)
        {
            ll yet = H * (W - i);
            if( abs(yet/2 - H * i) < ans) ans = abs(yet/2 - H * i);
        }
        else
        {
            ll yet1 = (W-i) * (H - 1);
            ll yet2 = (W-i) * (H + 1);
            ll Max = max(H * i, max( yet1/2, yet2/2));
            ll Min = min(H* i, min( yet1/2, yet2/2));
            if( Max - Min < ans ) ans = Max - Min;
        }

    }

    cout << ans << endl;
}
