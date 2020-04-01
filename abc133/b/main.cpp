#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N,D;
    cin >> N >> D;

    vector<vector<int> >X(N,vector<int>(D));

    rep(i,N)
    {
        rep(j,D) cin >> X[i][j];
    }
    ll ans = 0;
    rep(i,N)
    {
        for( int j = i+1;j < N; j++)
        {
            ll tmp = 0;
            rep(k,D) tmp += pow(X[i][k] - X[j][k],2);
            ll k = 1;
            while( tmp >= k*k )
            {
                if( tmp == k*k )
                {
                    ans++;
                    break;
                }
                k++;
            }
        }
    }
    cout << ans << endl;


    
}
