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
    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N-1);
    rep(i,N) cin >> A[i];
    rep(i,N) cin >> B[i];
    rep(i,N-1) cin >> C[i];
    
    ll ans = 0;
    rep(i,N) ans += B[i];
    rep(i,N-1)
    {
        if(A[i] + 1 == A[i+1]) ans += C[A[i]-1];
    }
    cout << ans << endl;

}
