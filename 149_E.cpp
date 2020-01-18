#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

ll keta( ll x )
{
    if( x >= 10 ) return keta( x/10 ) + 1;
    else return 1;
}

int main()
{
    ll N;
    cin >> N;
    if(N%2 == 0)
    {
        ll ans = N/10;
        //cout << keta(N) << endl;
        rep(i,keta(N))
        {
            int key = N/pow(10,(keta(N)-i-1));
            cout << key << endl;
            N %= 10;
        }

        //ll keta = n/10;
    }
    else cout << 0 << endl;


}
