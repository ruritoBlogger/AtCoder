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
    vector<int> W(N);
    rep(i,N) cin >> W[i];

    int ans = INF;
    rep(i,N)
    {
        int tmp_left = 0;
        for(int j = i;j < N;j++) tmp_left += W[j];
        int tmp_right = 0;
        for(int j = 0;j < i;j++) tmp_right += W[j];
        ans = min(ans, abs(tmp_left - tmp_right));
    }
    cout << ans << endl;


}
