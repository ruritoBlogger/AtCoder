#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N,M;
    cin >> N >> M;

    priority_queue<ll> q;

    rep(i,N)
    {
        ll tmp;
        cin >> tmp;
        q.push(tmp);
    }

    rep(i,M)
    {
        ll n = q.top();
        q.pop();
        q.push(n/2);
    }

    ll ans = 0;
    rep(i,N)
    {
        ans += q.top();
        q.pop();
    }
    cout << ans << endl;
}
