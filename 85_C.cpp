#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int n,y;
    int ans[3] = {-1,-1,-1};
    int total;
    cin >> n >> y;
    rep(i,n+1)
    {
        rep(j,n+1)
        {
            if(i+j>n) continue;
            int tmp = 1000 * (n-i-j);
            total = i*10000 + j*5000 + tmp;
            if(y==total)
            {
                ans[0] = i;
                ans[1] = j;
                ans[2] = n-i-j;
            }
        }
    }
    cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
}
