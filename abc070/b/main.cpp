#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int A,B,C,D;
    cin >> A >> B >> C >> D;

    cout << max(0, min(B,D) - max(A,C) ) << endl;
}
