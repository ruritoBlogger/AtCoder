#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    string a;
    cin >> a;
    int ans = 0;
    int tmp = 0;
    const string b = "ATGC";
    rep(i,a.size())
    {
        if(!strcmp(a[i],b[0]) || !strcmp(a[i],b[1]) || !strcmp(a[i],b[2]) || !strcmp(a[i],b[3]))
        {
            if(tmp > ans) ans = tmp;
            tmp = 0;
        }
        tmp++;
    }
    cout << ans << endl;
}
