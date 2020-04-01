#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N,Q;
    string s;
    cin >> N >> Q >> s;

    vector<pair<int, int> > lr(Q);
    rep(i,Q) cin >> lr[i].first >> lr[i].second;

    vector<int>dp;
    dp.push_back(0);

    rep(i,s.size()-1)
    {
        if(s[i] == 'A' && s[i+1] == 'C') dp.push_back(dp[dp.size()-1] + 1);
        else dp.push_back(dp[dp.size()-1]);
    }
    rep(i,Q)
    {
        cout << dp[lr[i].second-1] - dp[lr[i].first-1] << endl;
    }
}
