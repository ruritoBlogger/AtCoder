#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll D,N;
    cin >> D >> N;
    if(N==100) N++;
    if(D == 0)cout << N << endl;
    else if(D == 1) cout << N * 100 << endl;
    else cout << N * 10000 << endl;
}
