#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

ll kakeru(ll x)
{
    if( x <= 1 ) return 1;
    else return kakeru(x-1)*x;
}

int main()
{
    int N;
    cin >> N;

    vector<int>P(N);
    vector<int>Q(N);
    rep(i,N) cin >> P[i];
    rep(i,N) cin >> Q[i];
 
    ll intP = 0;
    rep(i,N) intP += P[i] * pow(10,N-i);
    intP /= 10;

    ll intQ = 0;
    rep(i,N) intQ += Q[i] * pow(10,N-i);
    intQ /= 10;

    ll p = 1;
    ll q = 1;

    if(N%2==0)
    {
        // 最大値からカウントダウン
        if(P[0] > N/2)
        {
            ll saidai = 0;
            rep(i,N) saidai += (N-i)*pow(10,(N-i));
            saidai /= 10;
            //while( saidai == 
        }
    }

    cout << p << " " << q << endl;
    cout << abs(p-q) << endl;
}
