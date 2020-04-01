#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

set<ll> soinsuu(set<ll> input, vector<ll> x )
{
    std::vector<ll>::iterator iter = std::max_element(all(x));
    size_t index = std::distance(x.begin(), iter);
    while(true)
    {
        bool flag = true;
        for(ll i = 2;i < x[index];i++)
        {
            rep(j,x.size())
            {
                if(x[j]%i==0)
                {
                    rep(k,x.size()) if( x[k]%i==0 ) x[k]/=i;
                    input.insert(i);
                    flag = false;
                    break;
                }
            }
            if(!flag) break;
        }
        if(flag)
        {
            rep(i,x.size()) input.insert(x[i]);
            break;
        }
    }
    return input;
}


int main()
{
    ll N,M;
    cin >> N >> M;
    vector<ll>a(N);
    rep(i,N) cin >> a[i];

    set<ll> s;
    rep(i,N) s = soinsuu(s,a);
    
    ll key = 1;
    ll ans = 0;

    for(set<ll>::iterator itr = s.begin(); itr != s.end(); ++itr) {
        std::cout << *itr << "\n";      // イテレータの指す先のデータを表示
        key *= *itr;
    }
    if( key%2==0 ) key /= 2;
    if(key!=1)    
    {
        ans += M/key/2;
        if( M/key%2==1) ans++;

    }
    cout << ans << endl;
}
