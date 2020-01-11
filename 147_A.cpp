#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int a1,a2,a3;
    cin >> a1 >> a2 >> a3;

    if(a1+a2+a3 > 21) cout << "bust" << endl;
    else cout << "win" << endl;

}
