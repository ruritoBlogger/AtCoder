#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int n;
    cin >> n;
    int ans = n;
    for(int i = 1;i <= n;i++)
    {
        if( ans > (n%i + abs(n/i - i)) ) ans = n%i + abs(n/i - i);
    }


    cout << ans << endl;
        

}
