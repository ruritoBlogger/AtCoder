#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N,C;
    cin >> N >> C;

    vector<int>s(N);
    vector<int>t(N);
    vector<int>c(N);
    vector<int>w(pow(10,5)+1);
    rep(i,N)
    {
        cin >> s[i] >> t[i] >> c[i];
        w[s[i]]++;
        w[t[i]+1]--;
    }
    int ans = 0;
    int tmp_ans = 0;
    rep(i,w.size())
    {
        tmp_ans += w[i];
        ans = max(ans,tmp_ans);
    }
    cout << min(C,ans) << endl;
}
