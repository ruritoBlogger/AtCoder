#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N;
    cin >> N;
    int ans = -1;
    rep(i,N+1)
    {
        if(i < 10) ans++;
        else if( i > 99 && i <1000) ans++;
        else if(i > 9999 && i < 100000) ans++;
    }
    cout << ans << endl;
}
