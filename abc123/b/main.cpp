#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int tmp;
    int ans = 0;
    int most = 0;
    rep(i,5)
    {
        cin >> tmp;
        if(tmp%10 != 0)
        {
            if((10 - tmp%10) > most) most = (10 -tmp%10);
            tmp += (10 - tmp%10);
        }
        ans += tmp;
    }
    ans -= most;
    cout << ans << endl;

}
