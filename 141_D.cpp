#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N,M;
    cin >> N >> M;

    vector<ll>A(N);
    rep(i,N) cin >> A[i];
    
    sort(all(A),greater<ll>());
    //cout << endl;
    rep(i,M)
    {
        if(N > i)sort(A.begin(),A.begin()+i+1,greater<ll>());
        else if(i-N+1 < N)
        {
            int tmp = (i-N+1)/N;
            sort(A.begin(), A.begin()+(i - N*(tmp+1) + 1),greater<ll>());
        }
        //rep(i,A.size()) cout << A[i] << " ";
        //cout << endl;
        if(A[0]  < 2)
        {
            cout << 0 << endl;
            return 0;
        }
        A[0] /= 2;
    }

    ll ans = 0;
    rep(i,N) ans += A[i];
    cout << ans << endl;
}
