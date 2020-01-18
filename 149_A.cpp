#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int A,B;
    cin >> A >> B;

    if( A+B == 3) cout << 3 << endl;
    else if( A+B == 5) cout << 1 << endl;
    else cout << 2 << endl;
}
