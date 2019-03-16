#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n)cin >> a[i];
    sort(all(a));
    vector<ll>ans(n,INF);
    ll tmp;
    rep(i,n)
    {
        while(true)
        {
            tmp = a[a.size()-i - 1];
            rep(j,n)
            {
                if(ans[a.size()-i-1] > tmp%a[j] && tmp%a[j] != 0) ans[a.size()-i-1] = tmp%a[j];
            }
            if(ans[a.size()-i-1] <= a[0] || ans[a.size()-i-1] == INF)break;
            cout << "debug" << endl;
        }
    }
    rep(i,n) cout << ans[i] << " ";
    cout << endl;
}
