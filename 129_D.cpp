#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int H,W;
    cin >> H >> W;
    vector<string> s(H);
    vector<string> wideS(W);
    vector<pair<int, int> > pos;
    vector<pair<int, int> > widePos;
    rep(i,H)
    {
        cin >> s[i];
        pos.push_back(make_pair(count(all(s[i]),'#'), i));
        rep(j,s[i].size())wideS[j].push_back(s[i][j]);
    }
    sort(all(pos));
    rep(i,H) cout << pos[i].first << " at " << pos[i].second << endl;
    cout << endl;
    rep(i,W) cout << wideS[i] << endl;
    cout << endl;
    rep(i,W)
    {
        widePos.push_back(make_pair(count(all(wideS[i]),'#'),i));
    }
    sort(all(widePos));
    rep(i,W) cout << widePos[i].first << " at " << widePos[i].second << endl;
    int ans = 0;
    if(pos[0].first == 0 && widePos[0].first == 0) cout << H+W-1 << endl;
    /*
    else if(pos[0].first == 0)
    {
        rep(i,widePos.size())
        {
            j
*/

}
