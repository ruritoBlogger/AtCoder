#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int a,b;
    cin >> a >> b;
    int ans = 0;
    if(a < b)
    {
        ans += b;
        b--;
    }
    else
    {
        ans += a;
        a--;
    }

    if(a < b)
    {
        ans += b;
        b--;
    }
    else
    {
        ans += a;
        a--;
    }
    cout << ans << endl;
}
