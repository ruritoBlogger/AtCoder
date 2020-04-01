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
    vector<ll> ans(N);
    rep(i,N)
    {
        cin >> A[i];
        ans[i] = A[i];
    }
        
    sort(all(ans),greater<int>());

    //rep(i,ans.size()) cout << ans[i] << endl;
    rep(i,N)
    {
        bool flag = false;
        rep(j,N)
        {
            if(A[i] != ans[j] || flag)
            {
                cout << ans[j] << endl;;
                break;
            }
            else if(A[i] == ans[j]) flag = true;
        }
    }

    


}
