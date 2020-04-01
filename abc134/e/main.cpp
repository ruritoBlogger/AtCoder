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
    vector<ll> A(N);

    vector<pair<ll, ll> > flag;
    rep(i,N)
    {
        cin >> A[i];
    }
    int key = A[0];
    int ans = 1;
    for(int i = 1;i < N;i++)
    {
        rep(j,flag.size())
        {
            if(flag[j].first == A[i] && flag[j].second == 1 && key > A[i])
            {
                flag[j].second++;
            }
        }
        if(key >= A[i])
        {
            ans++;
            key = A[i];
            flag.push_back(make_pair(A[i],0));
        }
    }
    cout << ans << endl;
}
