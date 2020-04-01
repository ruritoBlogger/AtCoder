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
    vector<ll>A(N);
    rep(i,N) cin >> A[i];

    sort(all(A));
    ll ans = 0;
    ll tmp = 0;
    ll last = A[0];
    rep(i,N)
    {
        if( last != A[i] )
        {
            if( (tmp+2)%2!=0 ) ans++;
            last = A[i];
            tmp = 1;
        }
        else tmp++;
    }
    if( (tmp+2)%2!=0 ) ans++;

    cout << ans << endl;
}
