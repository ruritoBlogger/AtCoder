#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int A,B,C;
    cin >> A >> B >> C;

    if((B+C)-A > 0)cout << (B+C)-A << endl;
    else cout << 0 << endl;
}
