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
    int tmp;
    int compare = -1;
    int ans = 0;
    rep(i,n)
    {
        cin >> tmp;
        if(compare <= tmp)
        {
            ans++;
            compare = tmp;
        }
    }
    cout << ans << endl;

        


}
