#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    string s;
    cin >> s;
    int tmp;
    int last = -1;
    int ans = 0;
    rep(i,s.size())
    {
        tmp = (int)s[i] - 48;
        if(tmp == last)
        {
            ans++;
            if(last==1) last = 0;
            else last = 1;
        }
        else
        {
            last = tmp;
        }
    }
    cout << ans << endl;

}
