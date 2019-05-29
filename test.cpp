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
    
    vector<pair<int, int> > LR(M);
    rep(i,M) cin >> LR[i].first >> LR[i].second;

    int ans = 0;
    bool flag;
    for(int i = 1; i < N+1; i++)
    {
        flag = true;
        rep(j,M)
        {
            if(LR[j].first - i > 0 || LR[j].second - i < 0) flag = false;
        }
        if(flag) ans++;
    }
    cout << ans << endl;
}
