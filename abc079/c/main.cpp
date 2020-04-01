#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int a,b,c,d;
    cin >> a;
    b = a%1000;
    c = b%100;
    d = c%10;
    a /= 1000;
    b /= 100;
    c /= 10;
    rep(i,2)
    {
        if(i==1) a *= -1;
        rep(j,2)
        {
            if(j==1) b *= -1;
            rep(k,2)
            {
                if(k==1) c *= -1;
                rep(l,2)
                {
                    if(l==1) d *= -1;
                    if(a+b+c+d==7)
                    {
                        cout << a;
                        if(b>=0) cout << "+" << b;
                        else cout << b;
                        if(c>=0) cout << "+" << c;
                        else cout << c;
                        if(d>=0) cout << "+" << d;
                        else cout << d;
                        cout << "=7" << endl;
                        return 0;
                    }
                }
                d *= -1;
            }
            c *= -1;
        }
        b *= -1;
    }
}
