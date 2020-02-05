#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll N;
    ll ans = 0;
    cin >> N;
    
    if(N < 11)
    {
        cout << N << endl;
        return 0;
    }
    else
    {
        for(ll i=1;i<10;i++)
        {
            if( N > i * 10 + i)
            {
                ans+=2;
                ll n = 2;
                while( N>=(i+1) * pow(10,n) + i -9 )
                {
                    ans += 18;
                    n++;
                    if( N<(i+1) * pow(10,n) + i -9 )
                    {
                        ll tmp = i * pow(10,n) + i + 10;
                        while( N >= tmp )
                        {
                            ans+= 2;
                            tmp += 10;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;

}
