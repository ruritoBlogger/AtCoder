#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

ll nisin( ll i )
{
    ll ans = 1;
    while(true)
    {
        if(i < 10) return  ans;
        else
        {
            i /= 10;
            ans++;
        }
    }
}



int main()
{
    ll A,B,X;
    cin >> A >> B >> X;
    ll ans = 0;
    ll ans_i = 0;

    if(A+B > 100000000)
    {
        for(ll i = 1;i <= 1000000000;i++)
        {
            if( A*(i*10) + B*nisin(i*10) < X) i *= 10;
            if(A*i + B*nisin(i) > X) break;
            else if(ans < A*i + B*nisin(i))
            {
                ans = A*i + B*nisin(i);
                ans_i = i;
            }
        }
    }
    else
    {
        for(ll i = 1000000000;i > 0;i--)
        {
            if( A*(i/10) + B*nisin(i/10) > X) i /= 10;
            if(X >= A*i + B*nisin(i))
            {
                ans = A*i + B*nisin(i);
                ans_i = i;
                break;
            }
        }
    }
    cout << ans_i << endl;
}
