#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int n,t;
    cin >> n >> t;
    vector<pair<int, int> >c(n);
    vector<pair<int, int> > ans;

    rep(i,n) cin >> c[i].second >> c[i].first;
    sort(c.begin(),c.end());
    rep(i,n)
    {
        if(c[i].first <= t) ans.push_back(make_pair(c[i].second,c[i].first));
    }
    if(ans.size() ==0) cout << "TLE" << endl;
    else
    {
        sort(all(ans));
        //rep(i,n) cout << ans[i].first << endl;
        cout << ans[0].first << endl;
    }
}
