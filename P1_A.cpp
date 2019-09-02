#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int M,D;
    cin >> M >> D;
    int ans = 0;
    for(int k = 1;k <= M;k++)
    {
    for(int i = 2;i < D/10+1;i++)
    {
        for(int j = 2;j < min(10,D);j++)
        {
            if(i * 10 + j > D) continue;
            if(i * j == k)
            {
                ans++;
            }
        }
    }
    }
    cout << ans << endl;
}
