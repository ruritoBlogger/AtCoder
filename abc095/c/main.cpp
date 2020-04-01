#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int A,B,C,X,Y;
    cin >> A >> B >> C >> X >> Y;

    ll ans = 0;
    if(A+B < C*2)
    {
        ans = A * X + B * Y;
    }
    else
    {
        if(X == Y)
        {
            ans = C * 2 * min(X, Y);
        }
        else
        {
            ans += C * 2 * min(X, Y);
            if(X < Y)
            {
                if( B < C * 2)
                {
                    ans += (Y - X) * B;
                }
                else
                {
                    ans += (Y-X) * C * 2;
                }
            }
            else
            {
                if( A < C * 2)
                {
                    ans += (X - Y) * A;
                }
                else
                {
                    ans += (X-Y) * C * 2;
                }
            }
        }
    }
    cout << ans << endl;


}
