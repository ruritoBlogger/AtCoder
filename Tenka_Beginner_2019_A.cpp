#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a <= c && c <= b) cout << "Yes" << endl;
    else if(c <= a && b <= c) cout << "Yes" << endl;
    else cout << "No" << endl;
}
