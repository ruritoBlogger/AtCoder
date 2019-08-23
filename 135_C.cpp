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
    vector<ll> A(N+1);
    vector<ll> B(N+1);
    rep(i,N+1) cin >> A[i];
    rep(i,N) cin >> B[i];

    ll ans = 0;
    rep(i,N)
    {
        if(A[i] + A[i+1] <= B[i])
        {
            ans += A[i] + A[i+1];
            A[i+1] = 0;
        }
        else if(A[i] <= B[i])
        {
            ans += B[i];
            A[i+1] -= B[i] - A[i];
        }
        else
        {
            ans += B[i];
        }
    }
    cout << ans << endl;
}
