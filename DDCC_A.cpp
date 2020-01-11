#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int X,Y;
    cin >> X >> Y;
    ll ans = 0;
    if(X < 4) ans += (4-X) * 100000;
    if(Y < 4) ans += (4-Y) * 100000;
    if(X == 1 && Y == 1) ans += 400000;
    cout << ans << endl;
}
