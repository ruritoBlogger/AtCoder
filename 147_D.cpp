#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll N;
    cin >> N;
    vector<ll> A(N);
    set<ll> setA;
    
    ll waru = 10e8 + 7;

    rep(i,N)
    {
        cin >> A[i];
        setA.insert(A[i]);
    }
    sort(all(A));
    //rep(i,N) cout << A[i] << endl;
    
    vector<ll> kaburi(N,0);

    ll ans = 0;

    //被りの部分
    for(ll i = 0; i < N-1; i++)
    {
        for(ll j = i+1;j < N; j++)
        {
            if(A[i] == A[j])
            {
                kaburi[i]++;
            }
        }
    }

    //組み合わせ部分の計算
    ll n = 1; 
    for(auto itr = setA.begin(); itr != setA.end(); ++itr)
    {
        ll i = 0;
        auto ITR = setA.begin();
        rep(i,n) ITR++;
        for(ITR; ITR != setA.end(); ++ITR)
        {
            if(kaburi[n-1] != 0) ans += (*itr^*ITR)%waru*(kaburi[n-1]+1)%waru;
            else ans += (*itr^*ITR)%waru;
            cout << "ans is " << ans << " and itr is " << *itr << " and ITR is " << *ITR << endl;
            i++;
        }
        n++;
        ans %= waru;
    }

        cout << ans << endl;
}
