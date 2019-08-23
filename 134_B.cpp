#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N,D;
    cin >> N >> D;
   
    int ans = 1;
    while(true)
    {
        if(N <= 2*D+1)
        {
            cout << ans << endl;
            return 0;
        }
        else
        {
            ans++;
            N -= 2*D+1;
        }
    }


}
