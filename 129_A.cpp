#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int P,Q,R;
    cin >> P >> Q >> R;

    cout << P + Q + R - max(P,max(Q,R)) << endl;
}
