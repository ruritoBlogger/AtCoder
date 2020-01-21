#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int H,W,N;
    cin >> H >> W >> N;

    int a = max(H,W);
    if( N%a == 0) cout << N/a << endl;
    else cout << N/a+1 << endl;
}
