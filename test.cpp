#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N,Y;
    cin >> N >> Y;

    rep(i,N+1)
    {
        rep(j,N+1)
        {
            rep(k,N+1)
            {
                if( i+j+k == N && i*10000+j*5000+k*1000 == Y)
                {
                    cout << i << " " << j << " " << k << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
}
