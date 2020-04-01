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
    vector<pair<string, int> >p(n);
    vector<int> ans(n);
    vector<int> del;
    string tmp;
    rep(i,n)
    {
        cin >> tmp >> p[i].second;
        p[i].first = tmp;
    }
    string lower;
    int lower_pos;
    int ans_n = 1;
    bool flag;
    rep(j,n)
    {
        lower = "zzzzzzzzzzz";
        lower_pos = -1;
        rep(i,n)
        {
            flag = false;
            rep(k,del.size()) if(del[k] == i)
            {
                flag = true;
                break;
            }
            if(flag) continue;
            if(lower > p[i].first)
            {
                lower_pos = i;
                lower = p[i].first;
            }
            else if(lower == p[i].first)
            {
                if(p[lower_pos].second < p[i].second)
                {
                    lower_pos = i;
                }
            }
        }
        if(lower_pos == -1) ans[j] = n - 1;
        else ans[j] = lower_pos;
        del.push_back(lower_pos);
        ans_n++;
        //rep(k,del.size()) cout << del[k];
        //cout << endl;
    }
    rep(i,n) cout << ans[i]+1 << endl;
}
