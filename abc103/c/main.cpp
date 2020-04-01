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
    int N;
    cin >> N;

    vector<int> a(N);
    ll ans = 0;
    rep(i,N)
    {
        cin >> a[i];
        ans += a[i]-1;
    }
    cout << ans << endl;


}
