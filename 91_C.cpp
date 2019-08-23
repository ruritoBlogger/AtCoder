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

    vector<pair<int, int> > a(N);

    rep(i,N) cin >> a[i].first >> a[i].second;
    vector<pair<int, int> > c(N);
    rep(i,N) cin >> c[i].first >> c[i].second;

    sort(all(a),greater<pair<int, int> >());
    sort(all(c),greater<pair<int, int> >());
    vector<bool>isNotUsed(N,true);
    
    int ans = 0;
    rep(i,N)
    {
        rep(j,N)
        {
            if(!isNotUsed[j])continue;
            if(a[j].first <= c[i].first && a[j].second <= c[i].second)
            {
                //cout << "A is " << a[i].first << " " << a[i].second << " and C is " << c[i].first << " " << c[i].second << endl;
                ans++;
                isNotUsed[j] = false;
                break;
            }
        }

    }
    cout << ans << endl;
}
