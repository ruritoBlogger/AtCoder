#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll N,M;
    cin >> N >> M;
    vector<pair<ll, ll> > xy(M);
    rep(i,M) cin >> xy[i].first >> xy[i].second;

    set<ll> used;
    vector<ll> amount(N,1);
    used.insert(1);

    rep(i,M)
    {
        if(used.find(xy[i].first) != used.end() && amount[xy[i].first-1] != 0) used.insert(xy[i].second);
        amount[xy[i].first-1]--;
        amount[xy[i].first-1]++;
    }
    cout << used.size() << endl;

}
