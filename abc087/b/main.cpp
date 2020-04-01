#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    int ans = 0;
    rep(i,a)
    {
        rep(j,b)
        {
            int tmp = x;
            tmp -= (500*i);
            if(tmp < 0 ) continue;
            else if(tmp == 0) ans++;
            else
            {
                tmp -= (100*j);
                if(tmp < 0 ) continue;
                else if(tmp == 0)
                {
                    //cout <<"B" << endl;
                    ans++;
                }
                else
                {
                    if(tmp <= c*50)
                    {
                        ans++;
                        //cout <<"C" << endl;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}
