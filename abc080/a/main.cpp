#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    if(n*a > b) cout << b << endl;
    else cout << n*a << endl;
}
