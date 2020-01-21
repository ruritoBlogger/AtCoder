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
    int A,B;
    cin >> A >> B;
    cout << lcm(A,B) << endl;

}
