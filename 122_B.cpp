#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    string a;
    cin >> a;
    int ans = 0;
    int tmp = 0;
    bool flag = false;
    const string b = "ATGC";
    
    rep(i,a.size())
    {
        if(!flag)tmp = 0;
        flag = false;
        rep(j,b.size())
        {
            if(a[i] == b[j])
            {
                flag = true;
                tmp++;
                break;
            }
        }
        if(!flag) ans = max(ans, tmp);
    }
    ans = max(ans, tmp);
    cout << ans << endl;
}
