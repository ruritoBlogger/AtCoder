#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll N;
    cin >> N;

    ll ans = 0;
    for(ll i = 1; i < N;i++)
    {
        ans += i;
    }
    cout << ans << endl;
}
