#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

string s;
int H,W;

ll bfs()
{

}

int main()
{
    cin >> H >> W;

    rep(i,H)
    {
        string tmp;
        cin >> tmp;
        s += tmp;
    }
    //cout << s << endl;
    ll ans = 0;
    vector<bool> flag(H*W,false);
    rep(i,s.size()) if( s[i] == 'W' ) flag[i] = true;
    rep(i,s.size())
    {
        if(s[i] == '.')
        {
            cout << "-----------------------------" << endl;
            flag[i] = true;
            ans = max(ans, bfs(i) );
            cout << "the ans is " << ans << endl;
        }
    }
    cout << ans << endl;
}
