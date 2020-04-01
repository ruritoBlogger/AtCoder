#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int K,X;
    cin >> K >> X;

    rep(i,2*K-1)
    {
        cout << X + i - K + 1;
        if(i != 2*K-2) cout << " ";
    }
    cout << endl;
}
