#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

ll wa(ll a, ll n)
{
    if(a == n) return 0;
    else return wa(a+1,n) + a;
}

int main()
{
    int N;
    ll K;
    ll waru = 1e9 + 7;
    cin >> N >> K;
    vector<int>A(N);
    rep(i,N) cin >> A[i];

    ll tmp = 0;
    rep(i,N-1)
    {
        for(int j = i+1;j < N;j++)
        {
            if(A[i] > A[j])tmp++;
        }
    }
    
    sort(all(A),greater<int>());

    ll TMP = 0;
    rep(i,N-1)
    {
        for(int j = i+1;j < N;j++)
        {
            if(A[i] > A[j])TMP++;
        }
    }

    if(K==1)
    {
        cout << tmp << endl;
    }
    else
    {
        // K * tmpで配列内部の数
        cout << (K%waru * tmp%waru + (K%waru * (K - 1)%waru / 2)*TMP%waru)%waru << endl;
    }
}
