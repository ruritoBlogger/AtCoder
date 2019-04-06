#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    int tmp = max(a,max(b,c));
    int ans = a+b+c-tmp;
    rep(i,k) tmp *= 2;
    cout << ans + tmp << endl;
}
