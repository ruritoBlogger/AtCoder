#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int n,k;
    string s;
    cin >> n >> k >> s;
    int tmp;
    vector<int> Nums;
    int ans = 0;

    int now = 1;
    int cnt = 0;

    rep(i,s.size())
    {
        tmp = (int)s[i] - 48;
        if(tmp == now) cnt++;
        else
        {
            Nums.push_back(cnt);
            now = 1 - now;
            cnt = 1;
        }
    }
    if(cnt != 0) Nums.push_back(cnt);

    if(Nums.size() % 2 == 0) Nums.push_back(0);
    
    int Add = 2 * k + 1;

    vector<int> sum(Nums.size() + 1);
    rep(i,Nums.size()) sum[i + 1] = sum[i] + Nums[i];


    for(int i = 0;i < Nums.size();i += 2)
    {
        int left = i;
        int right = min(i + Add,(int)Nums.size());

        int tmp = sum[right] - sum[left];
        ans = max(tmp,ans);
    }
    cout << ans << endl;
}
