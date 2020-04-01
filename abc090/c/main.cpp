#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{

    ll N,M;
    cin >> N >> M;

    if(M < 3)
    {
        if(N == 1 && M == 1) cout << 1 << endl;
        else if(M == 1)
        {
            cout << (N-2) << endl;
        }
        else cout << 0 << endl;
    }
    else
    {
        if(N==1) cout << (M-2) << endl;
        else cout << (M-2) * (N-2) << endl;

    }

}
