#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N,Q;
    ll K;
    cin >> N >> K >> Q;
    vector<int>A(Q);
    vector<ll>cnt(N,K - Q);
    rep(i,Q)
    {
        cin >> A[i];
        cnt[A[i]-1]++;
    }
    rep(i,N)
    {
        if(cnt[i] > 0) cout <<"Yes" << endl;
        else cout << "No" << endl;
    }
    //cout << endl;
    //rep(i,N) cout << cnt[i] << endl; 
}
