#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int r,g,h;
    cin >> r >> g >> h;
    int ans = r*100+g*10+h;
    if(ans%4==0)cout << "YES" << endl;
    else cout << "NO" << endl;
}
