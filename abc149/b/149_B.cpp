#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll A,B,K;
    cin >> A >> B >> K;

    if( A < K )
    {
        K -= A;
        A = 0;
    }
    else
    {
        A -= K;
        cout << A << " " << B << endl;
        return 0;
    }
    if( B < K )
    {
        cout << 0 << " " << 0 << endl;
    }
    else
    {
        cout << 0 << " " << B-K << endl;
    }
}
