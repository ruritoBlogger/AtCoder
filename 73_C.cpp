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
    rep(i,N)
    {
        if( i+1 != N && A[i] != A[i+1] )
        {
            ans += 1;
        }
        else if( i+1 == N && A[i-1] == A[i] ) ans += 1;
        else
        {
            i += 1;
        }
    }
    cout << ans << endl;

    //rep(i,N) cout << A[i] << endl;
}
