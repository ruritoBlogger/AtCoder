#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

ll gcd(ll x, ll y)
{
	return y==0 ? x:gcd(y,x % y);
}

ll lcm(ll number1,ll number2){
	return number1 * number2 / gcd(number1,number2);	
}

int main()
{
    ll s;
    cin >> s;
    ll waru = 10e9;
    cout << 0 << " " << 0 << " ";
    if(s < waru)
    {
        cout << 0 << " " << s << " ";
        cout << 1 << " " << s << endl;
    }
    else if(s%2 == 0)
    {
        for(ll i = waru;i > 1;i--)
        {
            if(s%i == 0 && s/i <= waru && i <= waru)
            {
                cout << 0 << " " << s/i << " " << i << " " << s/i << endl;
                return 0;
            }
        }
    }
    else
    {


    }
}
