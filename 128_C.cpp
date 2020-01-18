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

    vector<vector<int > >K;
    rep(i,M)
    {
        int k;
        cin >> k;
        vector<int> TMP;
        rep(i,k)
        {
            int tmp;
            cin >> tmp;
            TMP.push_back(tmp-1);
        }
        K.push_back(TMP);
    }
    vector<int> p(M);
    rep(i,M) cin >> p[i];

    ll ans = 0;

    vector<int> array;
    rep(bit,(1<<N))
    {
        vector<bool> use(M,false);
        rep(i,N)
        {
            if (bit & (1<<i)) {
                use[i] = true;
            }
        }
        bool flag = true;
        rep(j,K.size())
        {
            int num = 0;
            rep(k,K[j].size())
            {
                if( use[k] ) num++;
            }
            if( (p[j] && (num+2)%2 == 0) || (!p[j] && (num+2)%2 != 0) )
            {
                flag = false;
                break;
            }
        }
        if(flag) ans++;
    }
    cout << ans << endl;
}
