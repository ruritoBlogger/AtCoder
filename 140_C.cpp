#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N;
    cin >> N;
    vector<int> B(N-1);
    rep(i,N-1) cin >> B[i];
    ll ans = 0;
    bool flag = false;
    int tmp;
    ans += B[0];
    for(int i = 1;i < N-1;i++)
    {
        ans += min(B[i-1],B[i]);
    }
    ans += B[N-2];
    cout << ans << endl;
}
