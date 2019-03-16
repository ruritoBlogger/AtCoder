#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int n;
    cin >> n;
    vector<pair<int, pair<int, ll> > >x(n);
    rep(i,n) cin >> x[i].first >> x[i].second.first >> x[i].second.second;
    sort(all(x));
    cout << endl;
    ll ave_x,ave_y,H;
    //rep(i,n) cout << x[i].first << " " << x[i].second.first<< " "  << x[i].second.second << endl;
    rep(i,100)
    {
        rep(j,100)
        {
            H = abs(x[0].first - i) + abs(x[0].second.first - j) + x[0].second.second;
            if(H >= 0) cout << "H is " << H << endl;
        }
    }
}
