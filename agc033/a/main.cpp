#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
 
int main()
{
    int h,w;
    cin >> h >> w;
    string c(h*w+1,'.');
    vector<pair<int, int> > black;
    vector<pair<int, int> >white;
    vector<bool>all;
    vector<bool>changed;
    rep(i,h*w) cin >> c[i];
    //cout << c.size() << endl;
    rep(i,h*w)
    {
        if(c[i] == '#') all.push_back(true);
        else all.push_back(false);
        changed.push_back(false);
    }
    //rep(i,black.size()) cout << black[i].first << " " << black[i].second << endl;
    int ans = 0;
    bool upflag;
    while(true)
    {
        upflag = false;
        rep(i,all.size())
        {
            if(!all[i]) continue;
            else if(all[i] && changed[i])
            {
                changed[i] = false;
                continue;
            }
            else
            {
                cout << "i is " << i << endl;
                if(i-1 > -1 && !all[i-1] && !changed[i-1])
                {
                    changed[i-1] = true;
                    all[i-1] = true;
                    upflag = true;
                }
                if(i-h > -1 && !all[i-h] && !changed[i-h])
                {
                    changed[i-h] = true;
                    all[i-h] = true;
                    upflag = true;
                }
                if(i+1 < all.size() && !all[i+1] && !changed[i+1])
                {
                    changed[i+1] = true;
                    all[i+1] = true;
                    upflag = true;
                }
                if(i+h < all.size() && !all[i+h] && !changed[i+h])
                {
                    changed[i+h] = true;
                    all[i+h] = true;
                    upflag = true;
                }
            }
        }
        cout << "uped" << endl;
        if(upflag) ans++;
        else break;
    }
    cout << ans << endl;
}
