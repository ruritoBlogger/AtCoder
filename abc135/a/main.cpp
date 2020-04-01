#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll A,B;
    cin >> A >> B;
    if((A+B)%2 != 0) cout << "IMPOSSIBLE" << endl;
    else cout << (A+B)/2 << endl;
}
