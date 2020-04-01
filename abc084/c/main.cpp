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

    vector<int> C(N);
    vector<int> S(N);
    vector<int> F(N);

    rep(i,N-1) cin >> C[i] >> S[i] >> F[i];
    
    rep(j,N)
    {
        ll ans = 0;
        for(int i = j;i < N-1;i++)
        {
            if( ans < S[i] )
            {
                ans = S[i]+C[i];
            }
            else
            {
                ll start = S[i];
                while( start < ans ) start += F[i];
                //cout << "ans is " << ans << " and start is " << start << endl;
                ans = start + C[i];
            }
            //cout << ans << endl;
        }
        cout << ans << endl;
    }




}
