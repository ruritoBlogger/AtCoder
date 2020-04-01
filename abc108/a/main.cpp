#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int K;
    cin >> K;
    
    ll ans = 0;
    for(int i = 1;i <= K;i++) if(i%2==0) ans++;
    if(K%2==0) cout << ans * ans << endl;
    else cout << ans * (ans + 1) << endl;


}
