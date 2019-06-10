#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll N,M;
    ll waru = 1000000007;
    cin >> N >> M;
    vector<ll> a(M);
    if(M != 0)
    {
        rep(i,M) cin >> a[i];
    }
    vector<ll> DP;
    DP.push_back(1);
    ll M_count = 0;
    for(ll i = 1; i < N+1; i++)
    {
        if(M != 0)
        {
            if(a[M_count] == i)
            {
                DP.push_back(0);
                if(M_count + 1 != M) M_count++;
            }
            else
            {
                if(DP.size() > 1)DP.push_back((DP[DP.size()-1]+DP[DP.size()-2])%waru);
                else DP.push_back(DP[0]);
            }
        }
        else
        {
            if(DP.size() > 1)DP.push_back((DP[DP.size()-1]+DP[DP.size()-2])%waru);
            else DP.push_back(DP[0]);
        }
    }
    //rep(i,DP.size())cout << DP[i] << endl;
    if(DP[DP.size()-1] != 0) cout << DP[DP.size()-1] << endl;
    else cout << 0 << endl;
    return 0;
}
